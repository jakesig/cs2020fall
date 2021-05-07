#include <stdio.h>
#include "maze.h"

static room_t maze[10];

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