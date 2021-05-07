/* Jacob Sigman
 * CS-102-E
 * Professor Cusack
 * lab3.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int fill(int array[10]);
void print(int array[10]);

int main (int argc, char **argv) {
  srand48(getpid());
  int array[10];
  fill(array);
  print(array);
  return 0;
}

int fill(int array[10]) {
  int i = 0;
  for (i = 0; i < 10; i = i + 1) {
    array[i]=array[i][j]=(2000000000+(mrand48()/2))%100;
  }
}

void print(int array[10]) {
  int i = 0;
  for (i = 0; i < 10; i = i + 1) {
    fprintf(stdout, "%d\n", array[i]);
  }
}
