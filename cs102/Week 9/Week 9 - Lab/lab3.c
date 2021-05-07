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
  if (file != NULL ) {
    while ( fgets( read, 1024, file ) != NULL ) {
      fprintf( stdout, "%s", read );
    }
  }
  fclose(file);
  return 0;
}
