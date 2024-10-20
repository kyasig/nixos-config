{ config, pkgs, ... }:
{
  # Vesktop
  home = {
    packages = with pkgs; [ vesktop ];
  };

  xdg = {
    configFile = {
      "vesktop/themes/nix-colors-theme.css" = {
        text = ''
          .theme-dark,
          .theme-light {
             --background-primary: #${config.colorScheme.palette.base01};
             /* background of background of chat window */
             --background-secondary: #${config.colorScheme.palette.base00};
             /* background of channel bar */
             --background-secondary-alt: #${config.colorScheme.palette.base00};
             /* background of profile */
             --channel-textarea-background: #${config.colorScheme.palette.base00};
             /* background of textarea */
             --background-tertiary: #${config.colorScheme.palette.base01};
             /* background of channel bar */
             --background-accent: #${config.colorScheme.palette.base01};
             --text-normal: #${config.colorScheme.palette.base06};
             --text-spotify: #${config.colorScheme.palette.base02};
             --text-muted: #${config.colorScheme.palette.base03};
             --text-link: #${config.colorScheme.palette.base04};
             --background-floating: #${config.colorScheme.palette.base01};
             --header-primary: #${config.colorScheme.palette.base06};
             --header-secondary: #${config.colorScheme.palette.base06};
             --header-spotify: #${config.colorScheme.palette.base02};
             --interactive-normal: #${config.colorScheme.palette.base06};
             --interactive-muted: #${config.colorScheme.palette.base03};
             --interactive-hover: #${config.colorScheme.palette.base07};
             --interactive-active: #${config.colorScheme.palette.base06};
             --ping: #${config.colorScheme.palette.base03};
             --background-modifier-selected: #${config.colorScheme.palette.base01};
             --scrollbar-thin-thumb: #${config.colorScheme.palette.base03};
             --scrollbar-thin-track: transparent;
             --scrollbar-auto-thumb: #${config.colorScheme.palette.base03};
             --scrollbar-auto-track: transparent;
             --channels-default: #${config.colorScheme.palette.base05};
             --channel-icon: #${config.colorScheme.palette.base06};
             --brand-experiment: #${config.colorScheme.palette.base02};

             --status-positive-background: #${config.colorScheme.palette.base0C};
             --status-positive-text: var(--text-normal);
             --status-danger: #${config.colorScheme.palette.base08};

             --button-secondary-background: var(--background-tertiary);

             --white-500: var(--text-primary) !important;

             --input-background: var(--background-tertiary);

             --autocomplete-bg: var(--background-secondary);
             --brand-500: #${config.colorScheme.palette.base0C};
          }

          :root {
             --white-500: var(--text-primary) !important;
             --font-primary: 'JetBrainsMono Nerd Font';
          }

          select, textarea, input, ::placeholder {
             color: var(--text-muted);
          }

          [class*=themedBackground] {
            background: var(--background-secondary);
          }

          .container_b92032 {
            background: var(--background-secondary);
          }

          .wrapper__8436d:hover .childWrapper_a6ce15, .wrapper__8436d.selected_ae80f7 .childWrapper_a6ce15 {
            background: var(--brand-experiment);
          }

          body {
          }

          * {
          }

          .body-2wLx-E,
          .headerTop-3GPUSF,
          .bodyInnerWrapper-2bQs1k,
          .footer-3naVBw {
            background-color: var(--background-tertiary);
          }

          .title-17SveM,
          .name-3Uvkvr {
            font-size: 12px;
          }

          .panels-3wFtMD {
            background-color: var(--background-secondary);
          }

          .username-h_Y3Us {
            font-family: var(--font-display);
            font-size: 12px;
          }

          .icon_eff5d4 {
            color: var(--text-muted);
          }

          .peopleColumn-1wMU14,
          .panels-j1Uci_,
          .peopleColumn-29fq28,
          .peopleList-2VBrVI,
          .content-2hZxGK,
          .header-1zd7se,

          .root-g14mjS .small-23Atuv .fullscreenOnMobile-ixj0e3 {
            background-color: var(--background-secondary);
          }

          .textArea-12jD-V,
          .lookBlank-3eh9lL,
          .threadSidebar-1o3BTy,
          .scrollableContainer-2NUZem,
          .perksModalContentWrapper-3RHugb,
          .theme-dark .footer-31IekZ,

          .theme-light .footer-31IekZ {
            background-color: var(--background-tertiary);
          }

          [class*=textArea] {
            color: var(--text-normal);
            background: var(--background-secondary);
          }

          .numberBadge-2s8kKX,
          .base-PmTxvP,
          .baseShapeRound-1Mm1YW,
          .bar-30k2ka,
          .unreadMentionsBar-1Bu1dC,
          .mention-1f5kbO,
          .active-1SSsBb,

          .disableButton-220a9y {
            background-color: var(--ping) !important;
          }

          .lookOutlined-3sRXeN.colorRed-1TFJan,
          .lookOutlined-3sRXeN.colorRed-1TFJan {
            color: var(--ping) !important;
          }

          .header-3OsQeK,
          .container-ZMc96U {
            box-shadow: none !important;
            border: none !important;
          }

          .content-1gYQeQ,
          .layout-1qmrhw,
          .inputDefault-3FGxgL,
          .input-2g-os5,
          .input-2z42oC,
          .role-2TIOKu,

          .searchBar-jGtisZ {
            border-radius: 6px;
          }

          .layout-1qmrhw:hover,
          .content-1gYQeQ:hover {
            background-color: var(--background-modifier-selected) !important;
          }

          .container-3wLKDe {
            background-color: var(--background-secondary) !important;
          }

          .title-31SJ6t {
            background-color: var(--background-primary) !important;
          }

          .scrollableContainer__33e06.themedBackground__6b1b6.webkit__8d35a {
            background-color: var(--background-secondary);
          }

          .wrapper_d281dd:hover .childWrapper__01b9c,
          .wrapper_d281dd.selected_f5ec8e .childWrapper__01b9c {
            background-color: #${config.colorScheme.palette.base02};
            color: #${config.colorScheme.palette.base06};
          }

          .container_b181b6 {
            background-color: var(--background-secondary);
          }

          .theme-dark .themed_b152d4 {
            background-color: var(--background-secondary);
          }

          [class*=slateTextArea] {
            color: var(--text-normal);
          }

          .theme-dark .hljs-regexp, .theme-dark .hljs-string, .theme-dark .hljs-meta .hljs-string {
            color: #${config.colorScheme.palette.base0B};
          }

          .theme-dark .hljs-name, .theme-dark .hljs-quote, .theme-dark .hljs-selector-tag, .theme-dark .hljs-selector-pseudo {
              color: #${config.colorScheme.palette.base08};
          }

          .theme-dark .hljs-built_in, .theme-dark .hljs-symbol {
              color: #${config.colorScheme.palette.base0D};
          }

          .theme-dark .hljs-title, .theme-dark .hljs-title.class_, .theme-dark .hljs-title.class_.inherited__, .theme-dark .hljs-title.function_ {
              color: #${config.colorScheme.palette.base0C};
          }

          .theme-dark .hljs-attr, .theme-dark .hljs-attribute, .theme-dark .hljs-literal, .theme-dark .hljs-meta, .theme-dark .hljs-number, .theme-dark .hljs-operator, .theme-dark .hljs-variable, .theme-dark .hljs-selector-attr, .theme-dark .hljs-selector-class, .theme-dark .hljs-selector-id {
              color: #${config.colorScheme.palette.base0B};
          }

          .theme-dark .hljs-doctag, .theme-dark .hljs-keyword, .theme-dark .hljs-meta .hljs-keyword, .theme-dark .hljs-template-tag, .theme-dark .hljs-template-variable, .theme-dark .hljs-type, .theme-dark .hljs-variable.language_ {
              color: #${config.colorScheme.palette.base08};
          }

          .theme-dark .hljs-comment, .theme-dark .hljs-code, .theme-dark .hljs-formula {
              color: #${config.colorScheme.palette.base06};
          }
        '';
      };
    };
  };
}
