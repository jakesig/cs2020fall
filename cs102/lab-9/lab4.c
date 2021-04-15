#include <stdio.h>

int print_file( char* filename );
int main( int argc, char **argv )
{
  print_file(argv[1]);
  return 0;      
}
int print_file( char* filename ) {
  fprintf(stdout, "print_file(%s)\n", filename);
  FILE* file;
  char read[1024];
  file = fopen( filename, "r" );
  int count = 0;
  if (file != NULL ) {
    while ( fgets( read, 1024, file ) != NULL ) {
      count++;
    }
  }
  fprintf(stdout, "%s %d lines\n", filename, count);
  fclose(file);
  return 0;
}
