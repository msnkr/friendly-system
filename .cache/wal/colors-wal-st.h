const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#000000", /* black   */
  [1] = "#ACC5E0", /* red     */
  [2] = "#B1CDEB", /* green   */
  [3] = "#E8C0BC", /* yellow  */
  [4] = "#CCD8E9", /* blue    */
  [5] = "#D6E7F5", /* magenta */
  [6] = "#FCFCCA", /* cyan    */
  [7] = "#f6f6f5", /* white   */

  /* 8 bright colors */
  [8]  = "#acacab",  /* black   */
  [9]  = "#ACC5E0",  /* red     */
  [10] = "#B1CDEB", /* green   */
  [11] = "#E8D5D3", /* yellow  */
  [12] = "#CCD8E9", /* blue    */
  [13] = "#D6E7F5", /* magenta */
  [14] = "#F3F8FC", /* cyan    */
  [15] = "#f6f6f5", /* white   */

  /* special colors */
  [256] = "#000000", /* background */
  [257] = "#f6f6f5", /* foreground */
  [258] = "#f6f6f5",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
