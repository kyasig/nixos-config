{ pkgs, lib, config, ... }:
{
  programs.qutebrowser = {
    enable = true;
    searchEngines = {
     DEFAULT = "https://startpage.com/search?q={}";
    };
    settings = {
      scrolling.smooth = false;
      content.blocking.method = "both";
      statusbar.show = "in-mode";
      colors = {
        statusbar = {
          normal = {
            bg = "#${config.colorScheme.palette.base00}";
            fg = "#${config.colorScheme.palette.base07}";
          };
          command = {
            bg = "#${config.colorScheme.palette.base00}";
            fg = "#${config.colorScheme.palette.base07}";
          };
          insert = {
            bg = "#${config.colorScheme.palette.base00}";
            fg = "#${config.colorScheme.palette.base0B}";
          };
          url = {
            success.http.fg = "#${config.colorScheme.palette.base0B}";
            success.https.fg = "#${config.colorScheme.palette.base0B}";
            fg = "#${config.colorScheme.palette.base07}";
            error.fg = "#${config.colorScheme.palette.base08}";
            warn.fg = "#${config.colorScheme.palette.base08}";
            hover.fg = "#${config.colorScheme.palette.base0D}";
          };
        };
        webpage = {
          preferred_color_scheme = "${config.colorScheme.variant}";
          darkmode.enabled = true;
          darkmode.policy.images = "never";
        };
        tabs = {
          indicator.stop = "#${config.colorScheme.palette.base0D}";
          odd = {
            fg = "#${config.colorScheme.palette.base07}";
            bg = "#${config.colorScheme.palette.base00}";
          };
          even = {
            fg = "#${config.colorScheme.palette.base07}";
            bg = "#${config.colorScheme.palette.base01}";
          };
          selected = {
            odd = {
              fg = "#${config.colorScheme.palette.base00}";
              bg = "#${config.colorScheme.palette.base0E}";
            };
            even = {
              fg = "#${config.colorScheme.palette.base00}";
              bg = "#${config.colorScheme.palette.base0E}";
            };
          };
        };
        hints = {
          bg = "#${config.colorScheme.palette.base0E}";
          fg = "#${config.colorScheme.palette.base00}";
          match.fg = "#${config.colorScheme.palette.base0E}";
        };
      };
    };
   };
 }
