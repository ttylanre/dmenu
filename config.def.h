/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;      /* -b  option; if 0, dmenu appears at bottom */
static int instant = 1;     /* -n  option; if 1, select single entry automatically */
static int fuzzy = 1;       /* -F  option; if 0, dmenu doesn't use fuzzy matching */
static int centered = 1;    /* -c  option; centers dmenu on screen */
static int min_width = 600; /* minimum width when centered */
static const float menu_height_ratio = 4.0f; /* ratio used in the original calculation */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrainsMono Nerd Font:size=12"
};
static const char *prompt = NULL; /* -p  option; prompt to the left of input field */

static const unsigned int alpha = 0x99; /* Amount of opacity. 0xff is opaque */

/* Catppuccin Mocha */
static const char *colors[SchemeLast][2] = {
	/*                       fg         bg       */
	[SchemeNorm]          = { "#cdd6f4", "#1e1e2e" }, /* text      on base     */
	[SchemeSel]           = { "#cdd6f4", "#313244" }, /* text      on surface0 */
	[SchemeSelHighlight]  = { "#89b4fa", "#313244" }, /* blue      on surface0 */	
	[SchemeNormHighlight] = { "#89b4fa", "#1e1e2e" }, /* blue      on base     */
	[SchemeOut]           = { "#1e1e2e", "#a6e3a1" }, /* base      on green    */
};

static const unsigned int alphas[SchemeLast][2] = {
	/*                       fg      bg    */
	[SchemeNorm]          = { OPAQUE, alpha },
	[SchemeSel]           = { OPAQUE, alpha },
	[SchemeSelHighlight]  = { OPAQUE, alpha },
	[SchemeNormHighlight] = { OPAQUE, alpha },
	[SchemeOut]           = { OPAQUE, alpha },
};

/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines = 10;
static unsigned int columns = 1;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 2;
