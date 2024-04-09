//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {

/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"",  "~/.config/dwmsource/dotfiles/sb-battery",  60,  1}, 
  {"",  "~/.config/dwmsource/dotfiles/sb-nettraf",  60,  1}, 
  {"",  "~/.config/dwmsource/dotfiles/sb-clock",  60,  1}, 
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
