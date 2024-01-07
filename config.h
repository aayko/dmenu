/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Mononoki Nerd Font:size=13"
};
static const int user_bh = 4;               /* add an defined amount of pixels to the bar height */

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#ebdbb2", "#0f0f0f" },
	[SchemeUnselected] = { "#928374", "#0f0f0f" },
	[SchemeSel] = { "#ebdbb2", "#0f0f0f" },
	[SchemeOut] = { "#0f0f0f", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
