#include <stdio.h>
#include "maze.h"

int main( int argc, char** argv ) {
  set_location_x(2);
  clear_maze();
  build_wall(3);
  print_maze();
  return 0;
}

