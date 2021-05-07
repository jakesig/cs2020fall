/* Jacob Sigman
 * CS-102-E
 * Professor Cusack
 * lab5.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include "lab5func.h"

int main (int argc, char **argv) {
  srand48(getpid());
  int array[5][5];
  int array2[5][5];
  fill(array);
  fill(array2);
  print(array);
  print(array2);
  return 0;
}
