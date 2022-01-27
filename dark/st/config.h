/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

    /* 8 normal colors */
    [0] = "#232730", /* black   */
    [1] = "#973d46", /* red     */
    [2] = "#7ca25c", /* green   */
    [3] = "#e0ae4a", /* yellow  */
    [4] = "#517ba5", /* blue    */
    [5] = "#94628a", /* magenta */
    [6] = "#5f9f9e", /* cyan    */
    [7] = "#b4c0d4", /* white   */

    /* 8 bright colors */
    [8] = "#232730",  /* black   */
    [9] = "#973d46",  /* red     */
    [10] = "#7ca25c", /* green   */
    [11] = "#e0ae4a", /* yellow  */
    [12] = "#517ba5", /* blue    */
    [13] = "#94628a", /* magenta */
    [14] = "#5f9f9e", /* cyan    */
    [15] = "#b4c0d4", /* white   */

    /* special colors */
    [256] = "#101216", /* background */
    [257] = "#a7b5cd", /* foreground */
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */
static unsigned int defaultfg = 257;
static unsigned int defaultbg = 256;
static unsigned int defaultcs = 257;

/*
 * Colors used, when the specific fg == defaultfg. So in reverse mode this
 * will reverse too. Another logic would only make the simple feature too
 * complex.
 */
static unsigned int defaultitalic = 7;
static unsigned int defaultunderline = 7;
