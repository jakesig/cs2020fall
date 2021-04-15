/* Jacob Sigman
 * CS-102-E
 * Professor Cusack
 * Homework 9 - Functions C File
*/
#include <stdio.h>

int print_file( char* filename ) {
  FILE* file;
  char read[1024];
  file = fopen( filename, "r" );
  int count = 0;
  int bytes = 0;
  int words = 0;
  if (file != NULL ) {
    while ( fgets( read, 1024, file ) != NULL ) {
      count++;
      bytes+=string_length(read);
      words+=word_count(read);
    }
  }
  fprintf(stdout, "%s %d lines %d words %d bytes\n", filename, count, words, bytes);
  fclose(file);
  return 0;
}

int string_length(char* string) {
  int i = 0;
  while (string[++i] != '\0');
  return i;
}

int word_count(char* string) {
  int i = 0;
  int words = 0;
  while (string[i++] != '\0') {
    if((string[i] == ' ' || string[i] == '\n') && string[i+1] != ' ') {
      words++;
    }
  }
  return words;
}