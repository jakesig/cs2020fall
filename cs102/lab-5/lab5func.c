/* Jacob Sigman
 * CS-102-E
 * Professor Cusack
 * lab5func.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int fill(int array[5][5]) {
  int i = 0;
  int j = 0;
  for (i = 0; i < 5; i = i + 1) {
    for (j = 0; j < 5; j = j + 1) {
      array[i][j]=(2000000000+(mrand48()/2))%100;
    }
  }
}

void print(int array[5][5]) {
  int i = 0;
  int j = 0;
  for (i = 0; i < 5; i = i + 1) {
    for (j = 0; j < 5; j = j + 1) {
      fprintf(stdout, "%d\t", array[i][j]);
    }
    fprintf(stdout, "\n");
  }
  fprintf(stdout, "\n");
}
