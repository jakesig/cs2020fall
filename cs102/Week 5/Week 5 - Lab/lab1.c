/* Jacob Sigman
 * CS-102-E
 * Professor Cusack
 * lab1.c
 */

#include <stdio.h>

int main (int argc, char **argv) {
  int array[10];
  int i = 0;
  for (i = 0; i < 10; i = i + 1) {
    array[i]=5;
  }
  for (i = 0; i < 10; i = i + 1) {
    fprintf(stdout, "%d\n", array[i]);
  }
  return 0;
}
