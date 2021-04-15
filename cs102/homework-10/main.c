/*Jacob Sigman
 *CS-102-E
 *Homework 10
 *Main C File
 */

#include <stdio.h>
#include <stdlib.h>
#include "maze.h"
#include "file.h"

int main( int argc, char** argv ) {
  char input[1024];
  char command[1024];
  char name[1024];
  int spotx;
  int spoty;
  int spot;
  clear_maze();
  if (argc>1) {
    load(argv[1]);
  }
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
    else if (input[0] =='u') {
      move_up();
    }
    else if (input[0] == 'd') {
      move_down();
    }
    else if (sscanf(input, "x %d", &spotx) == 1) {
      set_location_x(spotx);
      print_maze();
    }
    else if (sscanf(input, "y %d", &spoty) == 1) {
      set_location_y(spoty);
      print_maze();
    }
    else if (sscanf(input, "save %s", name) == 1) {
      save(name);
    }
    else if ( sscanf(input, "%s %d %d", command, &spotx, &spoty) == 3) {
      if (sscanf(input, "empty %d %d", &spotx, &spoty) == 2) {
	clear_wall(spotx, spoty);
	print_maze();
      }
      else if (sscanf(input, "wall %d %d", &spotx, &spoty) == 2) {
	build_wall(spotx, spoty);
	print_maze();
      }
      else if (sscanf(input, "treasure %d %d", &spotx, &spoty) == 2) {
	build_treasure(spotx, spoty);
	print_maze();
      }
      else {
        fprintf(stdout, "Invalid Command\n");
      }
    }
    else {
      fprintf( stdout, "Invalid Input\n");
    }
    if (is_wall(get_location_x(), get_location_y())==2) {
      fprintf(stdout, "YOU WIN!\n");
      exit(0);
    }
  }
  return 0;
}

