/* Jacob Sigman
 * CS-102-E
 * Professor Cusack
 * lab4func.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int fill(int array[10]) {
  int i = 0;
  for (i = 0; i < 10; i = i + 1) {
    array[i]=(2000000000+(mrand48()/2))%100;
  }
}

void print(int array[10]) {
  int i = 0;
  for (i = 0; i < 10; i = i + 1) {
    fprintf(stdout, "%d\n", array[i]);
  }
}
