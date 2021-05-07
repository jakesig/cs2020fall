#include <stdio.h>
#include "maze.h"

static room_t maze[10];
static int location_x = 2;

void set_location_x(int x) {
  location_x = x;
}

int get_location_x() {
  return location_x;
}

void print_maze() {
  for( int i=0; i<10; i++ ) {
    if (i == get_location_x()) {
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
}

void clear_maze() {
  int i;
  for ( i=0; i<10; i++ ) {
    maze[i].wall = 0;
  }
}

int is_wall( int x ) {
  if (maze[x].wall == 1) {
    return 1;
  }
  return 0;
}

void build_wall( int x ) {
  maze[x].wall = 1;
}

void clear_wall( int x ) {
  maze[x].wall = 0;
}