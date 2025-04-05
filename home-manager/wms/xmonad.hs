import Colors
import Data.Maybe
import XMonad
import XMonad.Actions.CycleWorkspaceByScreen
import XMonad.Actions.DwmPromote
import XMonad.Actions.FindEmptyWorkspace
import XMonad.Actions.WithAll
import XMonad.Actions.MouseResize
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
import XMonad.Layout.ThreeColumns
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

myWorkspaces = show <$> [1 .. 9]

myBorderWidth = 4

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
    ("M-<F3>", spawn "brightnessctl set +5"),
    ("M-<F2>", spawn "brightnessctl set 5-"),
    ("M-<F7>", spawn "amixer set Master 2%+"),
    ("M-<F6>", spawn "amixer set Master 2%-"),
    ("M-0", namedScratchpadAction scratchpads "term"),
    ("M-p", namedScratchpadAction scratchpads "volume"),
    ("M-x", namedScratchpadAction scratchpads "top"),
    ("M-f", namedScratchpadAction scratchpads "file"),
    ("M-<Backspace>", kill),
    ("M-S-<Backspace>", killAll),
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
    ("M-S-d", sendMessage $ JumpToLayout "Dwind"),
    ("M-S-w", sendMessage $ JumpToLayout "Wide"),
    ("M-S-m", sendMessage $ JumpToLayout "Threecol"),
    ("M-v", cycleWorkspaceOnCurrentScreen [xK_c] xK_v xK_grave),
    ("M-n", viewEmptyWorkspace),
    ("M-C-n", tagToEmptyWorkspace),
    ("M-C-t", sinkAll)
  ]

-- layouts
myLayout =
  let full = R.named "Full" $ noBorders Full -- for jumpToLayout
      dwind =
        R.named "Dwind" $ Dwindle R CW 1.1 1.1
      wide =
        R.named "Wide" $ Mirror tall
      tall =
        R.named "Tall" $ ResizableTall 1 (3 / 100) (1 / 2) []
      threecol = R.named "Threecol" $ ThreeColMid 1 (3/100) (1/2)
   in lessBorders OnlyScreenFloat $
        avoidStruts
          ( R.renamed [R.CutWordsLeft 1] $
              spacingRaw False (Border 6 6 6 6) True (Border 6 6 6 6) True $
                tall ||| dwind ||| wide ||| threecol
          )
          ||| full


-- managehook
myManageHook =
  composeAll
    [ className =? "confirm" --> doFloat,
      className =? "file_progress" --> doFloat,
      className =? "dialog" --> doFloat,
      className =? "download" --> doFloat,
      className =? "error" --> doFloat,
      className =? "freetube" --> MH.doSink,
      className =? "vesktop" --> doShift (myWorkspaces !! 1),
      className =? "float" --> MH.doRectFloat (W.RationalRect 0.25 0.25 0.5 0.5)
    ]
    <+> namedScratchpadManageHook scratchpads
  where
scratchpads =
  let customFloat = customFloating $ W.RationalRect (1 / 12) (1 / 10) (5 / 6) (5 / 6)
   in [ NS "term" (myTerminal ++ " -T term") (title =? "term") customFloat,
        NS "passman" myPassMan (className =? myPassMan) customFloat,
        NS "volume" (myTerminal ++ " -T volume -e pulsemixer") (title =? "volume") customFloat,
        NS "top" (myTerminal ++ " -T top -e btop") (title =? "top") customFloat,
        NS "file" (myTerminal ++ " -T file -e " ++ myFileMan) (title =? "file") customFloat
      ]

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
      filterOutWsPP [scratchpadWorkspaceTag] $ --xmobarPP
        def
          { ppCurrent = xmobarColor color00 color0E . pad,
            ppHidden = xmobarColor color05 "",
            ppTitle = xmobarColor color05 "" . shorten 40,
            ppLayout =
              ( \x -> case x of
                  "Tall" -> "[]="
                  "Wide" -> "TTT"
                  "Dwind" -> "[@]"
                  "Threecol" -> "|||"
                  _ -> x
              ),
            ppSep = "  ",
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
