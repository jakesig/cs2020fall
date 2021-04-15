/* Jacob Sigman
 * CS-102-E
 * Professor Cusack
 * lab2.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main (int argc, char **argv) {
  srand48(getpid());
  int array[10];
  int i = 0;
  for (i = 0; i < 10; i = i + 1) {
    array[i]=array[i][j]=(2000000000+(mrand48()/2))%100;
  }
  for (i = 0; i < 10; i = i + 1) {
    fprintf(stdout, "%d\n", array[i]);
  }
  return 0;
}
