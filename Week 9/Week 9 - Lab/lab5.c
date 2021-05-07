#include <stdio.h>

int print_file( char* filename );
int string_length(char* string);

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
  if (file != NULL ) {
    while ( fgets( read, 1024, file ) != NULL ) {
      count++;
      bytes+=string_length(read);
    }
  }
  fprintf(stdout, "%s %d lines %d bytes\n", filename, count, bytes);
  fclose(file);
  return 0;
}

int string_length(char* string) {
    int i = 0;
    while (string[++i] != '\0');
    return i;
}