import XMonad
import XMonad.ManageHook
import Data.Maybe
import qualified XMonad.StackSet as W
import XMonad.Actions.DwmPromote
import XMonad.Util.EZConfig(additionalKeysP)
import XMonad.Util.SpawnOnce
import XMonad.Util.NamedScratchpad
import XMonad.Util.ClickableWorkspaces
import XMonad.Layout.Accordion
import XMonad.Layout.BoringWindows as B
import XMonad.Layout.ResizableTile
import XMonad.Layout.Spacing
import XMonad.Layout.Simplest
import XMonad.Layout.SubLayouts
import XMonad.Layout.WindowNavigation
import XMonad.Layout.Dwindle
import XMonad.Layout.SimpleDecoration
import XMonad.Layout.Tabbed
import XMonad.Layout.NoBorders
import XMonad.Layout.LayoutCombinators(JumpToLayout)
import qualified XMonad.Layout.Renamed as R
import XMonad.Hooks.DynamicLog
import XMonad.Hooks.EwmhDesktops
import XMonad.Hooks.WindowSwallowing
import XMonad.Hooks.ManageDocks
import qualified XMonad.Hooks.ManageHelpers as MH
import XMonad.Hooks.SetWMName
import XMonad.Hooks.StatusBar
import XMonad.Hooks.StatusBar.PP

import Colors

--variables
myMod = mod4Mask
myTerminal = "kitty"
myBrowser = "firefox"
myFileMan = "yazi"
myPassMan = "bitwarden"

--myRunCmd = "dmenu_run -i -l 7 -p 'spawn: ' -nb '" ++ color00  ++ "' -nf '" ++ color05 ++ "' -sb '" ++ color0E ++ "' -sf '" ++ color00 ++ "'" :: String
myRunCmd = "rofi -show drun"

--myWorkspaces = ["壹","貳","叄","肆","伍","陸","柒","捌","玖"]
myWorkspaces = show <$> [1..9]

myBorderWidth = 3
myNormalBorderColor = color00
myFocusedBorderColor = color0E


--keybindings
myKeys =
  [ ("M-<Return>"    , spawn myTerminal)
  , ("M-q"           , spawn "xmonad --recompile; xmonad --restart")
  , ("M-b"           , spawn myBrowser)
  , ("M-r"           , spawn myRunCmd)
  , ("M-<Delete>"    , spawn "rofi -show power-menu -modi power-menu:rofi-power-menu")
  , ("M-w"           , spawn "rofi -show window")
  , ("M-C-b"         , spawn "bm")
  , ("M-C-s"         , spawn "scrnsht save")
  , ("M-C-c"         , spawn "scrnsht copy")
  , ("<F3>"          , spawn "brightnessctl set +5")
  , ("<F2>"          , spawn "brightnessctl set 5-")
  , ("M-0"           , namedScratchpadAction scratchpads "term")
  --, ("M-S-p"         , namedScratchpadAction scratchpads "passman")
  , ("M-p"           , namedScratchpadAction scratchpads "volume")
  , ("M-x"           , namedScratchpadAction scratchpads "top")
  , ("M-f"           , namedScratchpadAction scratchpads "file")
  , ("M-<Backspace>" , kill)
  , ("M-<Tab>"       , sendMessage NextLayout)
  , ("M-h"           , sendMessage Shrink)
  , ("M-l"           , sendMessage Expand)
  , ("M-i"           , sendMessage MirrorExpand)
  , ("M-m"           , sendMessage MirrorShrink)
  , ("M-<.>"         , sendMessage $ IncMasterN (-1))
  , ("M-<,>"         , sendMessage $ IncMasterN 1)
  , ("M-d"           , decWindowSpacing 4)
  , ("M-a"           , incWindowSpacing 4)
  , ("M-<Space>"     , B.focusDown)
  , ("M-j"           , B.focusUp)
  , ("M-k"           , B.focusDown)
  , ("M-<L>"         , sendMessage $ pullGroup L)
  , ("M-<R>"         , sendMessage $ pullGroup R)
  , ("M-<U>"         , sendMessage $ pullGroup U)
  , ("M-<D>"         , sendMessage $ pullGroup D)
  , ("M-u"           , withFocused $ sendMessage . UnMerge)
  , ("M-C-j"         , onGroup W.focusDown')
  , ("M-C-k"         , onGroup W.focusDown')
  , ("M-s"           , dwmpromote)
  , ("M-S-f"         , sendMessage $ JumpToLayout "Full")
  , ("M-S-t"         , sendMessage $ JumpToLayout "Tall")
  , ("M-S-d"         , sendMessage $ JumpToLayout "Dwindle")
  , ("M-S-w"         , sendMessage $ JumpToLayout "Wide")
  ]

--layouts
myLayout = let full = R.renamed [R.Replace "Full"] Full --for jumpToLayout

               dwind = R.renamed [R.Replace "Dwindle"]
                     $ mySpacing 6
                     $ Dwindle R CW 1.1 1.1

               wide = R.renamed [R.Replace "Wide"]
                    $ Mirror tall

               tall = R.renamed [R.Replace "Tall"]
                    $ mySpacing 6
                    $ ResizableTall 1 (3/100) (1/2) []

               tabs = addTabs shrinkText myTabTheme . subLayout [] Simplest
               nav = windowNavigation . boringWindows

               myTabTheme = def { activeColor         = color0E
                                , inactiveColor       = color00
                                , activeBorderColor   = color0E
                                , inactiveBorderColor = color00
                                , activeTextColor     = color00
                                , inactiveTextColor   = color0E
                                }
               mySpacing i = spacingRaw False (Border i i i i) True (Border i i i i) True
           in smartBorders
            $ (R.renamed [R.CutWordsLeft 1 ]
            $ tabs
            $ nav
            $ avoidStruts (tall ||| dwind ||| wide)) ||| full

--scratchpads-
scratchpads = let customFloat = customFloating $ W.RationalRect (1/12) (1/10) (5/6) (5/6)
              in [ NS "term" (myTerminal ++ " -T term") (title =? "term") customFloat
                 , NS "passman" myPassMan (className =? myPassMan) customFloat
                 , NS "volume" (myTerminal ++ " -T volume -e pulsemixer") (title =? "volume") customFloat
                 , NS "top" (myTerminal ++ " -T top -e btop") (title =? "top") customFloat
                 , NS "file" (myTerminal ++ " -T file -e " ++ myFileMan) (title =? "file") customFloat
                 ]

--managehook
myManageHook = composeAll
               [ title     =? "pcmanfm" --> doFloat
               , title     =? "Bitwarden" --> doFloat
               , className =? "confirm" --> doFloat
               , className =? "file_progress" --> doFloat
               , className =? "dialog" --> doFloat
               , className =? "download" --> doFloat
               , className =? "error" --> doFloat
               , title     =? "vencorddesktop" --> doShift (myWorkspaces !! 1)
               , className =? "float" --> MH.doRectFloat ( W.RationalRect 0.25 0.25 0.5 0.5)
               ]
               <+>
               namedScratchpadManageHook scratchpads


--eventhook
myHandleEventHook = swallowEventHook (className =? myTerminal <||> className =? "Termite") $ return True

--startuphook
myStartupHook = do
  --spawnOnce "setbg&"
  setWMName "LG3D"

--statusbar

mySB = let myPP = filterOutWsPP[scratchpadWorkspaceTag] $ def{
                   --ppHiddenNoWindows = xmobarColor color03 ""
                  --ppCurrent = xmobarColor color05 "" . wrap ("<box type=Bottom width=2 mb=1 color=" ++ color0E ++ ">") "</box>"
                  ppCurrent = xmobarColor color00 color0E . pad
                  --ppCurrent = xmobarBorder "Full" color05 2
                 , ppHidden = xmobarColor color05  ""
                 , ppTitle = xmobarColor color05 "" . shorten 30
                 , ppLayout = xmobarColor color00 color0E . pad
                 --, ppSep =  "<fc=" ++ color05 ++ "> <fn=1>|<fn> </fc>"
                 , ppSep =  "<fc=" ++ color0E ++ "> <fn=1>|</fn> </fc>"
                 , ppOrder = \(ws:l:t:_)  -> [ws,l,t] -- ++ [t]
                 }
       in statusBarProp "xmobar" $ clickablePP myPP

main = xmonad
     $ ewmhFullscreen
     $ ewmh
     $ withSB mySB
     $ docks
     $ def
       { terminal           = myTerminal
       , modMask            = mod4Mask
       , layoutHook         = myLayout
       , startupHook        = myStartupHook
       , manageHook         = myManageHook
       , handleEventHook    = myHandleEventHook
       , borderWidth        = myBorderWidth
       , normalBorderColor  = myNormalBorderColor
       , focusedBorderColor = myFocusedBorderColor
       , workspaces         = myWorkspaces
       }
       `additionalKeysP`
       myKeys
