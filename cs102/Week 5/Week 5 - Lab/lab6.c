/* Jacob Sigman
 * CS-102-E
 * Professor Cusack
 * lab6.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include "lab6func.h"

int main (int argc, char **argv) {
  srand48(getpid());
  int array[5][5];
  int array2[5][5];
  int array3[5][5];
  fill(array);
  fill(array2);
  add(array,array2,array3);
  print(array);
  print(array2);
  print(array3);
  return 0;
}
