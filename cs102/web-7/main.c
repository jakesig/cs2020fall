/* Jacob Sigman
 * CS-102-E
 * Professor Cusack
 * Homework 7 - Main File
 * Code Partially Provided by Professor Cusack
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include "functions.h"

int main (int argc, char **argv) {
  srand48(getpid());
  fprintf(stdout,"Content-type: text/html\n\n");
  fprintf(stdout,"<TITLE>Homework 7 Matrix</TITLE>\n");
  fprintf(stdout,"<h1>Homework 7 Matrix</h1>\n");
  fprintf(stdout,"<h2>Jacob Sigman</h2>");
  fprintf(stdout,"<html>\n");
  fprintf(stdout,"<body>\n");
  fprintf(stdout,"<table>\n");
  int array[8][12];
  int array2[12][8];
  int array3[12][12];
  fill8x12(array);
  fill12x8(array2);
  cross(array,array2,array3);
  print8x12(array);
  print12x8(array2);
  print12x12(array3);
  fprintf(stdout,"</table>\n");
  fprintf(stdout,"</html>\n");
  fprintf(stdout,"</body>\n");
  return 0;
}
