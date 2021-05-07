#include <stdio.h>

int print_file( char* filename );
int string_length(char* string);
int word_count(char* string);


int main( int argc, char **argv ) {
  print_file(argv[1]);
  return 0;      
}

int print_file( char* filename ) {
  fprintf(stdout, "print_file(%s)\n", filename);
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
  fprintf(stdout, "%s %d lines %d bytes %d words\n", filename, count, bytes, words);
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
  while (string[i] != '\0') {
    if (string[i]==' ') {
      words++;
    }
    i++;
  }
  return ++words;
}