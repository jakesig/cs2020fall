#include <stdio.h>
#include "maze.h"

int main( int argc, char** argv ) {
  char input[1024];
  char command[1024];
  char name[1024];
  int spot;
  clear_maze();
  print_maze();
  while (fgets(input, 1024, stdin) != NULL) {
    if (sscanf(input, "load %s", name) == 1) {
      load(name);
    }
    else if (input[0] =='r') {
      move_right();
    }
    else if (input[0] == 'l') {
      move_left();
    }
    else if (sscanf(input, "save %s", name) == 1) {
      save(name);
    }
    else if ( sscanf(input, "%s %d", command, &spot) == 2) {
      if (sscanf(input, "empty %d", &spot) == 1) {
	clear_wall(spot);
	print_maze();
      }
      else if (sscanf(input, "wall %d", &spot) == 1) {
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

