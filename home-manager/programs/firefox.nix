{ config, pkgs, inputs, ...}:
{
  programs.librewolf.enable = true; #guh
  programs.firefox = {
    enable = true;
    profiles.ky = {
      extensions = with inputs.firefox-addons.packages."x86_64-linux"; [
        bitwarden
        ublock-origin
        darkreader
        tridactyl
        return-youtube-dislikes
        sponsorblock
        tabcenter-reborn
      ];
      userChrome = ''
      /*
  __  __   _           _                     
 |  \/  | (_)         (_)                    
 | \  / |  _   _ __    _   _ __ ___     __ _ 
 | |\/| | | | | '_ \  | | | '_ ` _ \   / _` |
 | |  | | | | | | | | | | | | | | | | | (_| |
 |_|  |_| |_| |_| |_| |_| |_| |_| |_|  \__,_|
                                            

*/


/* User changable variables */

:root {
	--tab-font-size: 0.8em; /* Font size of the tab labels */
	--tab-font-family: -apple-system, BlinkMacSystemFont, "Segoe UI", Roboto, Helvetica, Arial, sans-serif; /* The font used for the tab labels */
	--max-tab-width: none; /* The maximum width a tab in the tab bar can use. Set this to none for no limit */
	--show-titlebar-buttons: none; /* Hide the buttons (close/minimize/maximize) in the title bar. Required on some platforms (e.g macOS) to fully hide the title bar. `none` hides them, `block` shows them */
	--tab-height: 20px;
}

/* Minima Source Code. Here be dragons. */
/* Only change this if you know what you're doing */

.titlebar-buttonbox-container {
	display: var(--show-titlebar-buttons);
}

:root:not([customizing]) #TabsToolbar {
	margin-left: 1px !important;
	margin-right: 1px !important;
	border-radius: 0 !important;
	padding: 0 !important;
}
.tabbrowser-tab * {
	margin:0 !important;
	border-radius: 0 !important;
	font-family: var(--tab-font-family) !important;
}
.tabbrowser-tab {
	height: var(--tab-height);
	font-size: var(--tab-font-size) !important;
	min-height: 0 !important;
	align-items: center !important;
}
.tabbrowser-tab[fadein]:not([pinned]) {
	max-width: var(--max-tab-width) !important;
}
.tab-close-button, .new-tab-button, #firefox-view-button, #scrollbutton-up, .tab-secondary-label {
	display: none !important;
}
.tab-icon-image {
	height: auto !important;
	width: calc(var(--tab-height) / 1.5) !important;
	margin-right: 4px !important;
}

#tabs-newtab-button, #titlebar spacer {
	display: none !important;
}

:root:not([customizing]) #nav-bar
{
	min-height : 2.5em       !important;
	height     : 2.5em       !important;
	margin     : 0 0 -2.5em  !important;
	z-index    : -1000       !important;
	opacity    : 0           !important;
}

:root:not([customizing]) #nav-bar:focus-within
{
	z-index    : 1000        !important;
	opacity    : 1           !important;
}

#nav-bar{
	border-inline: var(--uc-window-drag-space-width) solid var(--toolbar-bgcolor);
}
#new-tab-button, #alltabs-button, #scrollbutton-down, .tab-loading-burst{
	display: none;
}
#titlebar {
	overflow: none !important;
}

/* Source file https://github.com/MrOtherGuy/firefox-csshacks/tree/master/chrome/hide_tabs_with_one_tab.css made available under Mozilla Public License v. 2.0
See the above repository for updates as well as full license text. */

/* Makes tabs toolbar items zero-height initially and sets enlarge them to fill up space equal to tab-min-height set on tabs. Optionally use privatemode_indicator_as_menu_button.css to replace main menu icon with private browsing indicator while tabs are hidden. */
/* Firefox 65+ only */

:root[sizemode="normal"] #nav-bar{ --uc-window-drag-space-width: 20px }

#titlebar{ -moz-appearance: none !important; }
#TabsToolbar{ min-height: 0px !important }

#tabbrowser-tabs, #tabbrowser-tabs > .tabbrowser-arrowscrollbox, #tabbrowser-arrowscrollbox{ min-height: 0 !important; }

:root:not([customizing]) #tabbrowser-tabs .tabs-newtab-button,
:root:not([customizing]) #tabs-newtab-button,
:root:not([customizing]) #TabsToolbar-customization-target > .toolbarbutton-1,
:root:not([customizing]) #TabsToolbar .titlebar-button{
	-moz-appearance: none !important;
	height: 0px;
	padding-top: 0px !important;
	padding-bottom: 0px !important;
	-moz-box-align: stretch;
	margin: 0 !important;
}

.accessibility-indicator,
.private-browsing-indicator{ 
	height: unset !important;
}
.accessibility-indicator > hbox{ padding-block: 0 !important }

#tabbrowser-tabs tab:only-of-type {
	visibility: collapse !important;
}

/* Button re-styling */
#tabs-newtab-button:hover,
#tabbrowser-tabs .tabs-newtab-button:hover{ background-color: var(--toolbarbutton-hover-background) }

#tabs-newtab-button > .toolbarbutton-icon,
#tabbrowser-tabs .tabs-newtab-button > .toolbarbutton-icon{
	padding: 0 !important;
	transform: scale(0.6);
	background-color: transparent !important;
}
/* Extra top padding  in maximized window */
@media (-moz-os-version: windows-win10){
	:root[sizemode="maximized"] #navigator-toolbox{ padding-top:7px !important; }
}
/* Fix window controls not being clickable */
:root[tabsintitlebar] #toolbar-menubar[autohide="true"][inactive]{
	transition: height 0ms steps(1) 80ms;
}
#nav-bar{
	border-inline: var(--uc-window-drag-space-width) solid var(--toolbar-bgcolor);
}
#navigator-toolbox {
	appearance: toolbar !important; /* Pretty much anything except none */
}
      '';
      extraConfig = ''
        //
/* You may copy+paste this file and use it as it is.
 *
 * If you make changes to your about:config while the program is running, the
 * changes will be overwritten by the user.js when the application restarts.
 *
 * To make lasting changes to preferences, you will have to edit the user.js.
 */

/****************************************************************************
 * Betterfox                                                                *
 * "Ad meliora"                                                             *
 * version: 119                                                             *
 * url: https://github.com/yokoffing/Betterfox                              *
****************************************************************************/

/****************************************************************************
 * SECTION: FASTFOX                                                         *
****************************************************************************/
/** GENERAL ***/
user_pref("content.notify.interval", 100000);

/** GFX ***/
user_pref("gfx.canvas.accelerated.cache-items", 4096);
user_pref("gfx.canvas.accelerated.cache-size", 512);
user_pref("gfx.content.skia-font-cache-size", 20);

/** DISK CACHE ***/
user_pref("browser.cache.jsbc_compression_level", 3);

/** MEDIA CACHE ***/
user_pref("media.memory_cache_max_size", 65536);
user_pref("media.cache_readahead_limit", 7200);
user_pref("media.cache_resume_threshold", 3600);

/** IMAGE CACHE ***/
user_pref("image.mem.decode_bytes_at_a_time", 32768);

/** NETWORK ***/
user_pref("network.buffer.cache.size", 262144);
user_pref("network.buffer.cache.count", 128);
user_pref("network.http.max-connections", 1800);
user_pref("network.http.max-persistent-connections-per-server", 10);
user_pref("network.http.max-urgent-start-excessive-connections-per-host", 5);
user_pref("network.http.pacing.requests.enabled", false);
user_pref("network.dnsCacheExpiration", 3600);
user_pref("network.dns.max_high_priority_threads", 8);
user_pref("network.ssl_tokens_cache_capacity", 10240);

/** SPECULATIVE LOADING ***/
user_pref("network.dns.disablePrefetch", true);
user_pref("network.prefetch-next", false);
user_pref("network.predictor.enabled", false);

/** EXPERIMENTAL ***/
user_pref("layout.css.grid-template-masonry-value.enabled", true);
user_pref("dom.enable_web_task_scheduling", true);
user_pref("layout.css.has-selector.enabled", true);
user_pref("dom.security.sanitizer.enabled", true);

/****************************************************************************
 * SECTION: SECUREFOX                                                       *
****************************************************************************/
/** TRACKING PROTECTION ***/
user_pref("browser.contentblocking.category", "strict");
user_pref("urlclassifier.trackingSkipURLs", "*.reddit.com, *.twitter.com, *.twimg.com, *.tiktok.com");
user_pref("urlclassifier.features.socialtracking.skipURLs", "*.instagram.com, *.twitter.com, *.twimg.com");
user_pref("network.cookie.sameSite.noneRequiresSecure", true);
user_pref("browser.download.start_downloads_in_tmp_dir", true);
user_pref("browser.helperApps.deleteTempFileOnExit", true);
user_pref("browser.uitour.enabled", false);
user_pref("privacy.globalprivacycontrol.enabled", true);
user_pref("privacy.globalprivacycontrol.functionality.enabled", true);

/** OCSP & CERTS / HPKP ***/
user_pref("security.OCSP.enabled", 0);
user_pref("security.remote_settings.crlite_filters.enabled", true);
user_pref("security.pki.crlite_mode", 2);

/** SSL / TLS ***/
user_pref("security.ssl.treat_unsafe_negotiation_as_broken", true);
user_pref("browser.xul.error_pages.expert_bad_cert", true);
user_pref("security.tls.enable_0rtt_data", false);

/** DISK AVOIDANCE ***/
user_pref("browser.privatebrowsing.forceMediaMemoryCache", true);
user_pref("browser.sessionstore.interval", 60000);

/** SHUTDOWN & SANITIZING ***/
user_pref("privacy.history.custom", true);

/** SEARCH / URL BAR ***/
user_pref("browser.search.separatePrivateDefault.ui.enabled", true);
user_pref("browser.urlbar.update2.engineAliasRefresh", true);
user_pref("browser.search.suggest.enabled", false);
user_pref("browser.urlbar.suggest.quicksuggest.sponsored", false);
user_pref("browser.urlbar.suggest.quicksuggest.nonsponsored", false);
user_pref("browser.formfill.enable", false);
user_pref("security.insecure_connection_text.enabled", true);
user_pref("security.insecure_connection_text.pbmode.enabled", true);
user_pref("network.IDN_show_punycode", true);

/** HTTPS-FIRST POLICY ***/
user_pref("dom.security.https_first", true);

/** PASSWORDS ***/
user_pref("signon.rememberSignons", false);
user_pref("signon.formlessCapture.enabled", false);
user_pref("signon.privateBrowsingCapture.enabled", false);
user_pref("network.auth.subresource-http-auth-allow", 1);
user_pref("editor.truncate_user_pastes", false);

/** ADDRESS + CREDIT CARD MANAGER ***/
user_pref("extensions.formautofill.addresses.enabled", false);
user_pref("extensions.formautofill.creditCards.enabled", false);

/** MIXED CONTENT + CROSS-SITE ***/
user_pref("security.mixed_content.block_display_content", true);
user_pref("security.mixed_content.upgrade_display_content", true);
user_pref("security.mixed_content.upgrade_display_content.image", true);
user_pref("pdfjs.enableScripting", false);
user_pref("extensions.postDownloadThirdPartyPrompt", false);

/** HEADERS / REFERERS ***/
user_pref("network.http.referer.XOriginTrimmingPolicy", 2);

/** CONTAINERS ***/
user_pref("privacy.userContext.ui.enabled", true);

/** WEBRTC ***/
user_pref("media.peerconnection.ice.proxy_only_if_behind_proxy", true);
user_pref("media.peerconnection.ice.default_address_only", true);

/** SAFE BROWSING ***/
user_pref("browser.safebrowsing.downloads.remote.enabled", false);

/** MOZILLA ***/
user_pref("permissions.default.desktop-notification", 2);
user_pref("permissions.default.geo", 2);
user_pref("geo.provider.network.url", "https://location.services.mozilla.com/v1/geolocate?key=%MOZILLA_API_KEY%");
user_pref("permissions.manager.defaultsUrl", "");
user_pref("webchannel.allowObject.urlWhitelist", "");

/** TELEMETRY ***/
user_pref("datareporting.policy.dataSubmissionEnabled", false);
user_pref("datareporting.healthreport.uploadEnabled", false);
user_pref("toolkit.telemetry.unified", false);
user_pref("toolkit.telemetry.enabled", false);
user_pref("toolkit.telemetry.server", "data:,");
user_pref("toolkit.telemetry.archive.enabled", false);
user_pref("toolkit.telemetry.newProfilePing.enabled", false);
user_pref("toolkit.telemetry.shutdownPingSender.enabled", false);
user_pref("toolkit.telemetry.updatePing.enabled", false);
user_pref("toolkit.telemetry.bhrPing.enabled", false);
user_pref("toolkit.telemetry.firstShutdownPing.enabled", false);
user_pref("toolkit.telemetry.coverage.opt-out", true);
user_pref("toolkit.coverage.opt-out", true);
user_pref("toolkit.coverage.endpoint.base", "");
user_pref("browser.ping-centre.telemetry", false);
user_pref("browser.newtabpage.activity-stream.feeds.telemetry", false);
user_pref("browser.newtabpage.activity-stream.telemetry", false);

/** EXPERIMENTS ***/
user_pref("app.shield.optoutstudies.enabled", false);
user_pref("app.normandy.enabled", false);
user_pref("app.normandy.api_url", "");

/** CRASH REPORTS ***/
user_pref("breakpad.reportURL", "");
user_pref("browser.tabs.crashReporting.sendReport", false);
user_pref("browser.crashReports.unsubmittedCheck.autoSubmit2", false);

/** DETECTION ***/
user_pref("captivedetect.canonicalURL", "");
user_pref("network.captive-portal-service.enabled", false);
user_pref("network.connectivity-service.enabled", false);

/****************************************************************************
 * SECTION: PESKYFOX                                                        *
****************************************************************************/
/** MOZILLA UI ***/
user_pref("browser.privatebrowsing.vpnpromourl", "");
user_pref("extensions.getAddons.showPane", false);
user_pref("extensions.htmlaboutaddons.recommendations.enabled", false);
user_pref("browser.discovery.enabled", false);
user_pref("browser.shell.checkDefaultBrowser", false);
user_pref("browser.newtabpage.activity-stream.asrouter.userprefs.cfr.addons", false);
user_pref("browser.newtabpage.activity-stream.asrouter.userprefs.cfr.features", false);
user_pref("browser.preferences.moreFromMozilla", false);
user_pref("browser.tabs.tabmanager.enabled", false);
user_pref("browser.aboutConfig.showWarning", false);
user_pref("browser.aboutwelcome.enabled", false);

/** THEME ADJUSTMENTS ***/
user_pref("toolkit.legacyUserProfileCustomizations.stylesheets", true);
user_pref("browser.compactmode.show", true);
user_pref("browser.display.focus_ring_on_anything", true);
user_pref("browser.display.focus_ring_style", 0);
user_pref("browser.display.focus_ring_width", 0);
user_pref("layout.css.prefers-color-scheme.content-override", 2);
user_pref("browser.privateWindowSeparation.enabled", false); // WINDOWS

/** COOKIE BANNER HANDLING ***/
user_pref("cookiebanners.service.mode", 1);
user_pref("cookiebanners.service.mode.privateBrowsing", 1);
user_pref("cookiebanners.service.enableGlobalRules", true);

/** FULLSCREEN NOTICE ***/
user_pref("full-screen-api.transition-duration.enter", "0 0");
user_pref("full-screen-api.transition-duration.leave", "0 0");
user_pref("full-screen-api.warning.delay", -1);
user_pref("full-screen-api.warning.timeout", 0);

/** URL BAR ***/
user_pref("browser.urlbar.suggest.calculator", true);
user_pref("browser.urlbar.unitConversion.enabled", true);
user_pref("browser.urlbar.trending.featureGate", false);

/** NEW TAB PAGE ***/
user_pref("browser.newtabpage.activity-stream.feeds.topsites", false);
user_pref("browser.newtabpage.activity-stream.feeds.section.topstories", false);

/*** POCKET ***/
user_pref("extensions.pocket.enabled", false);

/** DOWNLOADS ***/
user_pref("browser.download.useDownloadDir", false);
user_pref("browser.download.always_ask_before_handling_new_types", true);
user_pref("browser.download.manager.addToRecentDocs", false);

/** PDF ***/
user_pref("browser.download.open_pdf_attachments_inline", true);

/** TAB BEHAVIOR ***/
user_pref("browser.bookmarks.openInTabClosesMenu", false);
user_pref("browser.menu.showViewImageInfo", true);
user_pref("findbar.highlightAll", true);
user_pref("layout.word_select.eat_space_to_next_word", false);

/****************************************************************************
 * START: MY OVERRIDES                                                      *
****************************************************************************/
// visit https://github.com/yokoffing/Betterfox/wiki/Common-Overrides
// visit https://github.com/yokoffing/Betterfox/wiki/Optional-Hardening
// Enter your personal overrides below this line:
// PREF: disable Firefox Sync
user_pref("identity.fxaccounts.enabled", false);

// PREF: disable Firefox View
user_pref("browser.tabs.firefox-view", false);
user_pref("browser.tabs.firefox-view-next", false); // [FF119+]
user_pref("browser.firefox-view.feature-tour", "{\"screen\":\"\",\"complete\":true}");
user_pref("network.trr.mode", 2);
user_pref("network.trr.max-fails", 5);

user_pref("browser.toolbars.bookmarks.visibility", "always");

/****************************************************************************
 * SECTION: SMOOTHFOX                                                       *
****************************************************************************/
// visit https://github.com/yokoffing/Betterfox/blob/main/Smoothfox.js
// Enter your scrolling overrides below this line:

/****************************************************************************
 * END: BETTERFOX                                                           *
****************************************************************************/
      '';
    };
  };
}
