#include <stdio.h>
#include "maze.h"

int main( int argc, char** argv ) {
  char input[1024];
  char command[1024];
  int spot;
  clear_maze();
  build_wall(3);
  print_maze();
  while (fgets(input, 1024, stdin) != NULL) {
    if (input[0] == 'l') {
      move_left();
      print_maze();
    }
    else if (input[0] =='r') {
      move_right();
      print_maze();
    }
    else if ( sscanf(input, "%s %d", command, &spot) == 2) {
      if (sscanf(input, "empty %d", command, &spot) == 1) {
	clear_wall(spot);
	print_maze();
      }
      else if (sscanf(input, "wall %d", command, &spot) == 1) {
	build_wall(spot);
	print_maze();
      }
      else {
        fprintf(stdout, "Invalid Command\n");
      }
    }
    else {
      fprintf( stdout, "Invalid Input\n");
    }
  }
  return 0;
}

