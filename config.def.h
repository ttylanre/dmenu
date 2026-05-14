/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom     */
static int instant =
    1;                /* -n  option; if 1, select single entry automatically */
static int fuzzy = 1; /* -F  option; if 0, dmenu doesn't use fuzzy matching */
static int centered = 1;    /* -c option; centers dmenu on screen */
static int min_width = 800; /* minimum width when centered */
static const float menu_height_ratio =
    4.0f; /* This is the ratio used in the original calculation */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {"monospace:size=10"};
static const char *prompt =
    NULL; /* -p  option; prompt to the left of input field */
static const unsigned int alpha = 0x99; /* Amount of opacity. 0xff is opaque */
static const char *colors[SchemeLast][2] = {
    /*     fg         bg       */
    [SchemeNorm] = {"#c0caf5", "#1a1b26"},
    [SchemeSel] = {"#ffffff", "#2f3549"},
    [SchemeSelHighlight] = {"#7aa2f7", "#2f3549"},
    [SchemeNormHighlight] = {"#7aa2f7", "#1a1b26"},
    [SchemeOut] = {"#000000", "#9ece6a"},
};
static const unsigned int alphas[SchemeLast][2] = {
    [SchemeNorm] = {OPAQUE, alpha},
    [SchemeSel] = {OPAQUE, alpha},
    [SchemeOut] = {OPAQUE, alpha},
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines = 20;
static unsigned int columns = 1;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 2;
