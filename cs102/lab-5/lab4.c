/* Jacob Sigman
 * CS-102-E
 * Professor Cusack
 * lab4.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include "lab4func.h"

int main (int argc, char **argv) {
  srand48(getpid());
  int array[10];
  fill(array);
  print(array);
  return 0;
}
