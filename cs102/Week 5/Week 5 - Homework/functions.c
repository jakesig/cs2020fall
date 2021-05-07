/* Jacob Sigman
 * CS-102-E
 * Professor Cusack
 * Homework 5 - Functions C File
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

void fill8x12(int array[8][12]) {
  int i = 0;
  int j = 0;
  for (i = 0; i < 8; i = i + 1) {
    for (j = 0; j < 12; j = j + 1) {
      array[i][j]=(2000000000+(mrand48()/2))%100;
    }
  }
}

void fill12x8(int array[12][8]) {
  int i = 0;
  int j = 0;
  for (i = 0; i < 12; i = i + 1) {
    for (j = 0; j < 8; j = j + 1) {
      array[i][j]=(2000000000+(mrand48()/2))%100;
    }
  }
}

void print8x12(int array[8][12]) {
  int i = 0;
  int j = 0;
  for (i = 0; i < 8; i = i + 1) {
    for (j = 0; j < 12; j = j + 1) {
      fprintf(stdout, "%d\t", array[i][j]);
    }
    fprintf(stdout, "\n");
  }
  fprintf(stdout, "\n");
}

void print12x8(int array[12][8]) {
  int i = 0;
  int j = 0;
  for (i = 0; i < 12; i = i + 1) {
    for (j = 0; j < 8; j = j + 1) {
      fprintf(stdout, "%d\t", array[i][j]);
    }
    fprintf(stdout, "\n");
  }
  fprintf(stdout, "\n");
}

void print12x12(int array[12][12]) {
  int i = 0;
  int j = 0;
  for (i = 0; i < 12; i = i + 1) {
    for (j = 0; j < 12; j = j + 1) {
      fprintf(stdout, "%d\t", array[i][j]);
    }
    fprintf(stdout, "\n");
  }
  fprintf(stdout, "\n");
}

void cross(int array[8][12], int array2[12][8], int array3[12][12]) {
  int i = 0;
  int j = 0;
  int k = 0;
  for (i = 0; i < 12; i = i + 1) {
    for (j = 0; j < 12; j = j + 1) {
      array3[i][j] = 0;
      for (k = 0; k < 8; k = k + 1) {
	array3[i][j] = array3[i][j] + (array[k][i] * array2[j][k]);
      }
    }
  }
}
