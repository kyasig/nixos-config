import XMonad
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
import XMonad.Hooks.SetWMName
import XMonad.Hooks.StatusBar
import XMonad.Hooks.StatusBar.PP

import Colors.Colors

--variables
myMod = mod4Mask
myTerminal = "kitty"
myBrowser = "firefox"
myFileMan = "yazi"
myEmail = "thunderbird"

myWorkspaces = show <$> [1..9]

myBorderWidth = 3
myNormalBorderColor = color00
myFocusedBorderColor = color0E

windowCount = gets $ Just . show . length . W.integrate' . W.stack . W.workspace . W.current . windowset

--keybindings
myKeys =
  [ ("M-<Return>"    , spawn myTerminal)
  , ("M-b"           , spawn myBrowser)
  , ("M-r"           , spawn "rofi -show drun")
  , ("M-C-s"         , spawn "flameshot gui")
  , ("M-<Delete>"    , spawn "rofi -show power-menu -modi power-menu:rofi-power-menu")
  , ("<F3>"          , spawn "brillo -q -A 10")
  , ("<F3>"          , spawn "brillo -q -U 10")
  , ("M-0"           , namedScratchpadAction scratchpads "term")
  , ("M-e"           , namedScratchpadAction scratchpads "email")
  , ("M-p"           , namedScratchpadAction scratchpads "volume")
  , ("M-x"         , namedScratchpadAction scratchpads "top")
  , ("M-f"           , namedScratchpadAction scratchpads "file")
  , ("M-<Backspace>" , kill)
  , ("M-<Tab>"       , sendMessage NextLayout)
  , ("M-h"           , sendMessage Shrink)
  , ("M-l"           , sendMessage Expand)
  , ("M-i"           , sendMessage MirrorExpand)
  , ("M-m"           , sendMessage MirrorShrink)
  , ("M-d"           , decWindowSpacing 4)
  , ("M-a"           , incWindowSpacing 4)
  , ("M-<Space>"     , B.focusDown)
  , ("M-<L>"         , sendMessage $ pullGroup L)
  , ("M-<R>"         , sendMessage $ pullGroup R)
  , ("M-<U>"         , sendMessage $ pullGroup U)
  , ("M-<D>"         , sendMessage $ pullGroup D)
  , ("M-u"           , withFocused $ sendMessage . UnMerge)
  , ("M-j"           , onGroup W.focusDown')
  , ("M-k"           , onGroup W.focusDown')
  , ("M-s"           , dwmpromote)
  , ("M-S-f"         , sendMessage $ JumpToLayout "Full")
  , ("M-S-t"         , sendMessage $ JumpToLayout "Tall")
  , ("M-S-d"         , sendMessage $ JumpToLayout "Dwindle")
  , ("M-S-w"         , sendMessage $ JumpToLayout "Wide")
  ]

--layouts
myLayout = smartBorders 
         $ (R.renamed [R.CutWordsLeft 2 ] 
         $ mySpacing 6 
         $ tabs 
         $ nav 
         $ avoidStruts (tall ||| dwind ||| wide)) ||| full 
  where
    full = R.renamed [R.Replace "Full"] Full --for jumpToLayout 

    dwind = R.renamed [R.Replace "Dwindle"] 
          $ Dwindle R CW 1.1 1.1

    wide = R.renamed [R.Replace "Wide"]
         $ Mirror tall

    tall = R.renamed [R.Replace "Tall"]
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

--scratchpads
customFloat = customFloating $ W.RationalRect (1/12) (1/10) (5/6) (5/6)
scratchpads = [
    NS "term" (myTerminal ++ " -T term") (title =? "term") customFloat,
    NS "email" myEmail (className =? myEmail) customFloat,
    NS "volume" (myTerminal ++ " -T volume -e pulsemixer") (title =? "volume") customFloat,
    NS "top" (myTerminal ++ " -T top -e btop") (title =? "top") customFloat,
    NS "file" (myTerminal ++ " -T file -e " ++ myFileMan) (title =? "file") customFloat
  ]

--managehook
myManageHook = composeAll  
               [ title     =? "pcmanfm" --> doFloat
               , className =? "confirm" --> doFloat
               , className =? "file_progress" --> doFloat
               , className =? "dialog" --> doFloat
               , className =? "download" --> doFloat
               , className =? "error" --> doFloat
               , title     =? "vencorddesktop" --> doShift (myWorkspaces !! 1)
               ] <+> namedScratchpadManageHook scratchpads

--eventhook
myHandleEventHook = swallowEventHook (className =? myTerminal <||> className =? "Termite") (return True)

--startuphook
myStartupHook = do
  spawnOnce "nitrogen --restore &"
  setWMName "LG3D"

--statusbar
mySB = statusBarProp "xmobar" $ clickablePP myPP

myPP = filterOutWsPP[scratchpadWorkspaceTag] $ def{
      ppHiddenNoWindows = xmobarColor color05 ""
    , ppCurrent = xmobarColor color0E "" . wrap ("<box type=Bottom width=2 mb=2 color=" ++ color0E ++ ">") "</box>"
    , ppHidden = xmobarColor color0E  ""
    , ppTitle = xmobarColor color0A "" . shorten 30
    , ppSep =  "<fc=" ++ color0E ++ "> <fn=1>|</fn> </fc>"
    , ppLayout = xmobarColor color0E ""
    , ppExtras = [windowCount]
    , ppOrder = \(ws:l:t:ex)  -> [ws,l] ++ ex ++ [t]
    }

main = xmonad
     $ ewmhFullscreen
     $ ewmh
     $ withSB mySB
     $ docks
     $ def
       { terminal = "kitty"
       , modMask = mod4Mask
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
