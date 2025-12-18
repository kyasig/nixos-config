{
  programs.yazi = {
    enable = true;
    enableZshIntegration = true;
    settings = {
      manager = {
        ratio = [
          1
          5
          5
        ];
        sort_by = "alphabetical";
        sort_sensitive = false;
        sort_reverse = false;
        lineMode = "size";
      };
    };
  };
}
