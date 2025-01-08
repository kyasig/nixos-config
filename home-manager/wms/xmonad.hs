import Colors
import Data.Maybe
import XMonad
import XMonad.Actions.CycleWorkspaceByScreen
import XMonad.Actions.DwmPromote
import XMonad.Hooks.DynamicLog
import XMonad.Hooks.EwmhDesktops
import XMonad.Hooks.ManageDocks
import qualified XMonad.Hooks.ManageHelpers as MH
import XMonad.Hooks.SetWMName
import XMonad.Hooks.StatusBar
import XMonad.Hooks.StatusBar.PP
import XMonad.Hooks.WindowSwallowing
import XMonad.Hooks.WorkspaceHistory (workspaceHistoryHook)
import XMonad.Layout.Accordion
import XMonad.Layout.Dwindle
import XMonad.Layout.LayoutCombinators (JumpToLayout)
import XMonad.Layout.NoBorders
import qualified XMonad.Layout.Renamed as R
import XMonad.Layout.ResizableTile
import XMonad.Layout.SimpleDecoration
import XMonad.Layout.Simplest
import XMonad.Layout.Spacing
import XMonad.Layout.SubLayouts
import XMonad.Layout.Tabbed
import XMonad.ManageHook
import qualified XMonad.StackSet as W
import XMonad.Util.ClickableWorkspaces
import XMonad.Util.EZConfig (additionalKeysP)
import XMonad.Util.NamedScratchpad
import XMonad.Util.SpawnOnce

-- variables
myMod = mod4Mask

myTerminal = "kitty"

myBrowser = "firefox"

myFileMan = "yazi"

myPassMan = "bitwarden"

myRunCmd = "rofi -show drun"

-- myWorkspaces = ["壹","貳","叄","肆","伍","陸","柒","捌","玖"]
myWorkspaces = show <$> [1 .. 9]

myBorderWidth = 3

myNormalBorderColor = color00

myFocusedBorderColor = color0E

-- keybindings
myKeys =
  [ ("M-<Return>", spawn myTerminal),
    ("M-q", spawn "xmonad --recompile; xmonad --restart"),
    ("M-b", spawn myBrowser),
    ("M-r", spawn myRunCmd),
    ("M-<Delete>", spawn "rofi -show power-menu -modi power-menu:rofi-power-menu"),
    ("M-w", spawn "rofi -show window"),
    ("M-C-b", spawn "bm"),
    ("M-C-s", spawn "scrnsht save"),
    ("M-C-c", spawn "scrnsht copy"),
    ("<F3>", spawn "brightnessctl set +5"),
    ("<F2>", spawn "brightnessctl set 5-"),
    ("M-0", namedScratchpadAction scratchpads "term"),
    ("M-p", namedScratchpadAction scratchpads "volume"),
    ("M-x", namedScratchpadAction scratchpads "top"),
    ("M-f", namedScratchpadAction scratchpads "file"),
    ("M-<Backspace>", kill),
    ("M-<Tab>", sendMessage NextLayout),
    ("M-h", sendMessage Shrink),
    ("M-l", sendMessage Expand),
    ("M-i", sendMessage MirrorExpand),
    ("M-m", sendMessage MirrorShrink),
    ("M-<.>", sendMessage $ IncMasterN (-1)),
    ("M-<,>", sendMessage $ IncMasterN 1),
    ("M-d", decWindowSpacing 4),
    ("M-a", incWindowSpacing 4),
    ("M-<Space>", windows W.focusDown),
    ("M-j", windows W.focusUp),
    ("M-k", windows W.focusDown),
    ("M-s", dwmpromote),
    ("M-S-f", sendMessage $ JumpToLayout "Full"),
    ("M-S-t", sendMessage $ JumpToLayout "Tall"),
    ("M-S-d", sendMessage $ JumpToLayout "Dwindle"),
    ("M-S-w", sendMessage $ JumpToLayout "Wide"),
    ("M-v", cycleWorkspaceOnCurrentScreen [xK_c] xK_v xK_grave)
  ]

-- layouts
myLayout =
  let full = R.renamed [R.Replace "Full"] Full -- for jumpToLayout
      dwind =
        R.renamed [R.Replace "Dwindle"] $
          mySpacing 6 $
            Dwindle R CW 1.1 1.1
      wide =
        R.renamed [R.Replace "Wide"] $
          Mirror tall
      tall =
        R.renamed [R.Replace "Tall"] $
          mySpacing 6 $
            ResizableTall 1 (3 / 100) (1 / 2) []

      mySpacing i = spacingRaw False (Border i i i i) True (Border i i i i) True
   in lessBorders OnlyScreenFloat $
        avoidStruts (tall ||| dwind ||| wide) ||| noBorders full

-- scratchpads-
scratchpads =
  let customFloat = customFloating $ W.RationalRect (1 / 12) (1 / 10) (5 / 6) (5 / 6)
   in [ NS "term" (myTerminal ++ " -T term") (title =? "term") customFloat,
        NS "passman" myPassMan (className =? myPassMan) customFloat,
        NS "volume" (myTerminal ++ " -T volume -e pulsemixer") (title =? "volume") customFloat,
        NS "top" (myTerminal ++ " -T top -e btop") (title =? "top") customFloat,
        NS "file" (myTerminal ++ " -T file -e " ++ myFileMan) (title =? "file") customFloat
      ]

-- managehook
myManageHook =
  composeAll
    [ className =? "confirm" --> doFloat,
      className =? "file_progress" --> doFloat,
      className =? "dialog" --> doFloat,
      className =? "download" --> doFloat,
      className =? "error" --> doFloat,
      className =? "vesktop" --> doShift (myWorkspaces !! 1),
      className =? "float" --> MH.doRectFloat (W.RationalRect 0.25 0.25 0.5 0.5)
    ]
    <+> namedScratchpadManageHook scratchpads

-- eventhook
myHandleEventHook = swallowEventHook (className =? myTerminal) $ return True

-- startuphook
myStartupHook = do
  spawnOnce "xset r rate 200 50 &"
  setWMName "LG3D"

-- statusbar
mySB =
  statusBarProp "xmobar" $
    clickablePP $ -- lifts pp to X pp
      filterOutWsPP [scratchpadWorkspaceTag] $
        def
          { ppCurrent = xmobarColor color00 color0E . pad,
            ppHidden = xmobarColor color05 "",
            ppTitle = xmobarColor color05 "",
            ppLayout =
              ( \x -> case x of
                  "Tall" -> "[]="
                  "Wide" -> "TTT"
                  "Dwindle" -> "[@]"
                  _ -> x
              ),
            ppSep = "<fc=" ++ color0E ++ "> <fn=1>|</fn> </fc>",
            ppOrder = \(ws : l : t : _) -> [ws, l, t] -- ++ [t]
          }

main =
  xmonad $
    ewmhFullscreen $
      ewmh $
        withSB mySB $
          docks $
            def
              { terminal = myTerminal,
                modMask = mod4Mask,
                layoutHook = myLayout,
                startupHook = myStartupHook,
                manageHook = myManageHook,
                handleEventHook = myHandleEventHook,
                borderWidth = myBorderWidth,
                normalBorderColor = myNormalBorderColor,
                focusedBorderColor = myFocusedBorderColor,
                workspaces = myWorkspaces,
                logHook = workspaceHistoryHook
              }
              `additionalKeysP` myKeys
