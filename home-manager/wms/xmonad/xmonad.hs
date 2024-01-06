-- __  ____  __  ___  _   _    _    ____
-- \ \/ /  \/  |/ _ \| \ | |  / \  |  _ \
--  \  /| |\/| | | | |  \| | / _ \ | | | |
--  /  \| |  | | |_| | |\  |/ ___ \| |_| |
-- /_/\_\_|  |_|\___/|_| \_/_/   \_\____/
import XMonad
import Data.Maybe
import Data.Monoid
import System.Exit
import XMonad.Actions.DwmPromote
import XMonad.Actions.NoBorders
import qualified XMonad.Hooks.EwmhDesktops as EWMHD
import XMonad.Hooks.DynamicLog
import XMonad.Hooks.ManageDocks
import XMonad.Hooks.SetWMName
import XMonad.Hooks.StatusBar
import XMonad.Hooks.StatusBar.PP
import XMonad.Hooks.WindowSwallowing
import XMonad.Layout.NoBorders
import qualified XMonad.Layout.Renamed as RENAMED
import XMonad.Layout.BoringWindows
import XMonad.Layout.ResizableTile
import XMonad.Layout.Spacing
import XMonad.Layout.Spiral
import XMonad.Layout.SubLayouts
import XMonad.Layout.WindowNavigation
import XMonad.Layout.Fullscreen
import XMonad.Layout.SimpleDecoration
import XMonad.Layout.Simplest
import XMonad.Layout.Tabbed
import XMonad.ManageHook
import XMonad.Util.ClickableWorkspaces
import XMonad.Util.EZConfig(additionalKeysP)
import XMonad.Util.NamedScratchpad
import XMonad.Util.Run
import XMonad.Util.SpawnOnce
import XMonad.Util.Loggers
import qualified Data.Map as M
import qualified XMonad.StackSet as W

-----------------------------------------------------------------------
myTerminal = "alacritty"
myEmail = "thunderbird"
myBrowser = "firefox"

myFocusFollowsMouse = True
myClickJustFocuses = False
myBorderWidth = 4
myModMask = mod4Mask

myWorkspaces =  show <$> [1..9] 
--myWorkspaces =  take 9 $ repeat "●"

myNormalBorderColor = "#1e1e2e"
myFocusedBorderColor = "#f5c2e7"

windowCount = gets $ Just . show . length . W.integrate' . W.stack . W.workspace . W.current . windowset
-----------------------------------------------------------------------------------------------------
myKeys = [ ("M-<Return>"    , spawn myTerminal) 
         , ("M-C-s"         , spawn "flameshot gui")
         , ("M-r"           , spawn "rofi -show drun")
         , ("M-C-l"         , spawn "betterlockscreen -l")
         , ("M-e"           , namedScratchpadAction scratchpads"email")
         , ("M-0"           , namedScratchpadAction scratchpads"term")
         , ("M-C-0"         , namedScratchpadAction scratchpads"term2")
         , ("M-p"           , namedScratchpadAction scratchpads"volume")
         , ("M-f"           , namedScratchpadAction scratchpads"file")
         , ("M-x"           , namedScratchpadAction scratchpads"top")
         , ("M-g"           , withFocused toggleBorder)
         , ("M-<Backspace>" , kill )
         , ("M-<Tab>"       , sendMessage NextLayout)
         , ("M-d"           , decWindowSpacing 4)
         , ("M-a"           , incWindowSpacing 4)
         , ("M-n"           , refresh)
         , ("M-<Space>"     , focusDown)
         , ("M-h"           , sendMessage Shrink)
         , ("M-l"           , sendMessage Expand)
         , ("M-i"           , sendMessage MirrorExpand)
         , ("M-m"           , sendMessage MirrorShrink)
         , ("M-t"           , withFocused $ windows . W.sink)
         , ("M-,"           , sendMessage $ IncMasterN 1)
         , ("M-."           , sendMessage $ IncMasterN  $ -1)
         , ("M-n"           , refresh)
         , ("M-b"           , spawn myBrowser)
         , ("M-S-q"         , io $ exitWith ExitSuccess)
         , ("M-q"           , spawn "xmonad --recompile; xmonad --restart")
         , ("M-s"           ,dwmpromote) 
         , ("M-<Delete>"    , spawn "rofi -show power-menu -modi power-menu:rofi-power-menu")
         , ("<F2>"          , spawn "brillo -q -U 10 ")
         , ("<F3>"          , spawn "brillo -q -A 10 ")
         , ("M-<L>"         , sendMessage $ pullGroup L)
         , ("M-<R>"         , sendMessage $ pullGroup R)
         , ("M-<U>"         , sendMessage $ pullGroup U)
         , ("M-<D>"         , sendMessage $ pullGroup D)
         , ("M-u"           , withFocused $ sendMessage . UnMerge)
         , ("M-j"           , onGroup W.focusDown')
         , ("M-k"           , onGroup W.focusDown')
         ]
------------------------------------------------------------------------
-- Layouts:
myLayout = avoidStruts (tiled ||| wide) ||| Full
  where
   wide = RENAMED.renamed [RENAMED.Replace "Wide"] $ Mirror tiled
   tiled = RENAMED.renamed [RENAMED.Replace "Tall"] 
           $ windowNavigation 
           -- $ subTabbed
           $ addTabs shrinkText myTabTheme
           $ subLayout [] Simplest 
           $ boringWindows 
           $ fullscreenFull 
           $ mySpacing 6
           $ ResizableTall 1 (3/100) (1/2) []
   myTabTheme = def { --fontName            = "mononoki"
                      activeColor         = "#f5c2e7"
                    , inactiveColor       = "#1e1e2e"
                    , activeBorderColor   = "#f5c2e7"
                    , inactiveBorderColor = "#1e1e2e"
                    , activeTextColor     = "#1e1e2e"
                    , inactiveTextColor   = "#cdd6f4"
                    }
   mySpacing i = spacingRaw False (Border i i i i) True (Border i i i i) True 
------------------------------------------------------------------------
-- Window rules:
-- To find the property name associated with a program, use
-- > xprop | grep WM_CLASS
-- and click on the client you're interested in.
--myManageHook = fullscreenManageHook <+> namedScratchpadManageHook scratchpads
myManageHook = composeAll  
               [ className =? "pcmanfm" --> doFloat
--               , className =? "Gimp" --> doFloat
--               , resource =? "desktop_window" --> doIgnore
--               , resource =? "kdesktop" --> doIgnore
               ] <+> fullscreenManageHook <+> namedScratchpadManageHook scratchpads
------------------------------------------------------------------------
-- Scratchpads
--customFloat = customFloating $ W.RationalRect (1/12) (1/6) (5/6) (4/6)
customFloat = customFloating $ W.RationalRect (1/12) (1/10) (5/6) (5/6)
scratchpads = [
    NS "term" (myTerminal ++ " -T term") (title =? "term") customFloat,
    NS "term2" (myTerminal ++ " -T term2") (title =? "term2") customFloat,
    NS "email" myEmail (className =? myEmail) customFloat,
    NS "volume" (myTerminal ++ " -T volume -e pulsemixer") (title =? "volume") customFloat,
    NS "top" (myTerminal ++ " -T top -e btop") (title =? "top") customFloat,
    NS "file" (myTerminal ++ " -T file -e ranger") (title =? "file") customFloat
  ] 
------------------------------------------------------------------------
-- Event handling

-- * EwmhDesktops users should change this to ewmhDesktopsEventHook
myEventHook = swallowEventHook (className =? "Alacritty") (return True) <+> fullscreenEventHook
------------------------------------------------------------------------
-- Status bars and logging
-- Perform an arbitrary action on each internal state change or X event.
-- See the 'XMonad.Hooks.DynamicLog' extension for examples.
myLogHook = return ()
------------------------------------------------------------------------
-- Startup hook
-- Perform an arbitrary action each time xmonad starts or is restarted
-- with mod-q.  Used by, e.g., XMonad.Layout.PerWorkspace to initialize
-- per-workspace layout choices.
--
myStartupHook = do
  spawnOnce "nitrogen --restore &"
  --spawnOnce "picom --anim ations --animation-window-mass 1 --animation-for-open-window zoom --animation-stiffness 200 --experimental-backends &&"
  setWMName "LG3D"

--------------------------- ---------------------------------------------
-- Satus bar stuff
mySB = statusBarProp "xmobar ~/.config/xmobar/catppuccin-mocha-xmobarrc" $ clickablePP myXmobarPP

myXmobarPP = filterOutWsPP[scratchpadWorkspaceTag] $ def 
    { ppHiddenNoWindows = catforeground 
    , ppCurrent = catpink . wrap ("<box type=Bottom width=2 mb=2 color=f5c2e7>") "</box>" 
    , ppHidden = catpink  
    , ppTitle = catforeground . shorten 30 
    , ppSep = "<fc=#7f849c>  <fn=1>|</fn> </fc>"
    , ppLayout = catpink
    , ppExtras = [windowCount]
    , ppOrder = \(ws:l:t:ex)  -> [ws,l] ++ ex ++ [t]
    }
  where
    purple = xmobarColor "#b16286" ""
    yellow = xmobarColor "#d79921" ""
    catforeground = xmobarColor "#cdd6f4" ""
    catpink = xmobarColor "#f5c2e7" ""
--------------------------- -----------------------------------------------------------------------------
main = xmonad 
	   $ withSB mySB 
     $ EWMHD.ewmh
     $ fullscreenSupportBorder
	   $ docks
       def
        { terminal            = myTerminal
        , focusFollowsMouse   = myFocusFollowsMouse
        , clickJustFocuses    = myClickJustFocuses
        , borderWidth         = myBorderWidth
        , modMask             = myModMask
        , workspaces          = myWorkspaces
        , normalBorderColor   = myNormalBorderColor
        , focusedBorderColor  = myFocusedBorderColor
        , layoutHook          = myLayout
        , manageHook          = myManageHook    
        , handleEventHook     = myEventHook 
        , logHook             = myLogHook 
        , startupHook         = myStartupHook
        }
        `additionalKeysP`
        myKeys
