/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int instant = 1;
static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static const unsigned int alpha = 0x33;     /* Amount of opacity. 0xff is opaque             */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 100;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "source code pro medium:size=12"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
    /*                           fg         bg    */
    [SchemeNorm] =          { "#D5D0CA", "#000000" },
    [SchemeSel] =           { "#221819", "#ffffff" },
    //idk theme stealed from qtile
    [SchemeSelHighlight] =  { "#D5D0CA", "#000000" },
    [SchemeNormHighlight] = { "#757780", "#000000" },
    [SchemeOut] =           { "#3C3F3F", "#000000" },
    
    /*[SchemeNorm] =          { "#d8dee9", "#1b2b34" },
    * [SchemeSel] =           { "#000000", "#c594c5" },
    * // OCEANIC-NEXT THEME
    * [SchemeSelHighlight] =  { "#99C794", "#000000" },
    * [SchemeNormHighlight] = { "#99C794", "#000000" },
    * [SchemeOut] =           { "#ffffff", "#6699cc" },*/
    
    /*[SchemeNorm] =          { "#D8DEE9", "#2E3440" },
    * [SchemeSel] =           { "#000000", "#B48EAD" },
    * // NORD THEME
    * [SchemeSelHighlight] =  { "#A3BE8C", "#000000" },
    * [SchemeNormHighlight] = { "#A3BE8C", "#000000" },
    * [SchemeOut] =           { "#2E3440", "#88C0D0" },
    * [SchemeMid] =           { "#D8DEE9", "#000000" },*/
    
    /*[SchemeNorm] =          { "#657b83", "#fdf6e3" },
    * [SchemeSel] =           { "#ffffff", "#d33682" },
    * // SOLARIZED-LIGHT THEME
    * [SchemeSelHighlight] =  { "#2aa198", "#000000" },
    * [SchemeNormHighlight] = { "#2aa198", "#000000" },
    * [SchemeOut] =           { "#ffffff", "#268bd2" },
    * [SchemeMid] =           { "#073642", "#eee8d5" },*/

};

static const unsigned int alphas[SchemeLast][2] = {
    [SchemeNorm] = { OPAQUE, alpha },
    [SchemeSel] =  { OPAQUE, alpha },
    [SchemeOut] =  { OPAQUE, alpha },
};

/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 6;
static unsigned int columns    = 4;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;
