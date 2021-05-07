#include <stdio.h>
#include "maze.h"

int main( int argc, char** argv ) {
  int location_x = 2;

  clear_maze();
 
  build_wall(3);

  for( int i=0; i<10; i++ ) {
    if (i == location_x) {
      fprintf( stdout, "x ");
    }
    else if ( is_wall(i) == 1) {
      fprintf( stdout, "##");
    }
    else {
      fprintf( stdout, ". ");
    }
  }

  fprintf( stdout, "\n");
  return 0;
}

