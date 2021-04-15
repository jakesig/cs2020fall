#include <stdio.h>
#include "maze.h"

static room_t maze[10];
static int location_x = 0;

void save( char* filename ) {
  FILE* to_write = fopen(filename, "w");
  int i;
  if (to_write != NULL ) {
    for (i=0; i<10; i++) {
      if (is_wall(i)==1) {
	fprintf(to_write, "WALL %d\n", i);
      }
    }
    fclose(to_write);
  }
}

void load( char* filename ) {
  clear_maze();
  FILE* file;
  char read[1024];
  int spot;
  file = fopen( filename, "r" );
  if (file != NULL ) {
    while ( fgets( read, 1024, file ) != NULL ) {
      if (sscanf(read, "WALL %d", &spot) == 1) {
	build_wall(spot);
      }
    }
  }
  fclose(file);
}


void set_location_x(int x) {
  location_x = x;
}

int get_location_x() {
  return location_x;
}

void print_maze() {
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
}

void clear_maze() {
  int i;
  set_location_x(0);
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

void move_right() {
  int x = get_location_x()+1;
  if (!is_wall(x) && x<=9) {
    set_location_x(x);
  }
  print_maze();
}

void move_left() {
  int x = get_location_x()-1;
  if (!is_wall(x) && x>=0) {
    set_location_x(x);
  }
  print_maze();
}
 