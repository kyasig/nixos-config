{
  config,
  pkgs,
  inputs,
  ...
}:
let
  bookmarks = pkgs.writeShellApplication {
    name = "bm";
    text = ''
      browser="firefox"
      declare -A bookmarks
      bookmarks["invidious"]="https://inv.n8pjl.ca/feed/subscriptions"
      bookmarks["canvas"]="https://pacific.instructure.com/"
      bookmarks["student support center"]="https://pacific.mywconline.com/"
      bookmarks["degreeworks"]="https://dw-prod.ec.pacific.edu/responsiveDashboard/worksheets/WEB31"
      bookmarks["handhake"]="https://app.joinhandshake.com/stu"
      bookmarks["linkedin"]="https://www.linkedin.com/in/kevin-yang-80a50326a/"
      bookmarks["nvidia-portal"]="https://nvidia.wd5.myworkdayjobs.com/en-US/NVIDIAExternalCareerSite/login?redirect=%2Fen-US%2FNVIDIAExternalCareerSite%2FuserHome"
      bookmarks["github"]="https://github.com/"
      bookmarks["github-solarcar"]="https://github.com/UOP-Solarcar"
      bookmarks["piped"]="https://piped.us.projectsegfau.lt/feed"
      bookmarks["mangadex"]="https://mangadex.org/"
      bookmarks["mal"]="https://myanimelist.net/anime/season"
      bookmarks["anilist"]="https://anilist.co/user/kyasig/"
      bookmarks["nix packages"]="https://search.nixos.org/packages"
      bookmarks["overleaf"]="https://www.overleaf.com/project"
      bookmarks["mynixos"]="https://mynixos.com/"
      bookmarks["mypacific"]="https://my.pacific.edu/dashboard"
      bookmarks["matlab online"]="https://matlab.mathworks.com/"

      site_names=$(for key in "''${!bookmarks[@]}"; do echo "$key"; done)
      selected="''${bookmarks[$(echo "$site_names" | rofi -dmenu -i -l 7 -nb '#${config.colorScheme.palette.base00}' -nf '#${config.colorScheme.palette.base05}' -sb '#${config.colorScheme.palette.base0E}' -sf '#${config.colorScheme.palette.base00}' -p 'open bookmark: ')]}"
      $browser "$selected"
    '';
  };
in
{
  home.packages = [ bookmarks ];
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
      userChrome = '''';
      extraConfig = builtins.readFile ./user.js;
    };
  };
}
