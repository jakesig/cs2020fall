/*Jacob Sigman
 *CS-102-E
 *Homework 10
 *Maze C File
 */

#include <stdio.h>
#include "maze.h"

static room_t maze[10][10];
static int location_x = 0;
static int location_y = 0;

void set_location_x(int x) {
  if (is_wall(x, get_location_y())!=1) {
    location_x = x;
  }
}

int get_location_x() {
  return location_x;
}

void set_location_y(int y) {
  if (is_wall(get_location_x(), y)!=1) {
    location_y = y;
  }
}

int get_location_y() {
  return location_y;
}

void print_maze() {
  for( int i=0; i<10; i++ ) {
    for ( int j=0; j<10; j++) {
      if (j == location_x && i == location_y) {
        fprintf( stdout, "x ");
      }
      else if ( is_wall(j, i) == 1) {
        fprintf( stdout, "##");
      }
      else if ( is_wall(j, i) == 2) {
        fprintf( stdout, "T ");
      }
      else {
        fprintf( stdout, ". ");
      }
    }
    fprintf( stdout, "\n");
  }
  fprintf( stdout, "\n");
}

void clear_maze() {
  set_location_x(0);
  for ( int i=0; i<10; i++ ) {
    for ( int j=0; j<10; j++ ) {
      maze[i][j].wall = 0;
    }
  }
}

int is_wall( int x, int y ) {
  return maze[x][y].wall;
}

void build_wall( int x, int y ) {
  maze[x][y].wall = 1;
}

void clear_wall( int x, int y ) {
  maze[x][y].wall = 0;
}

void move_right() {
  int x = get_location_x()+1;
  if (is_wall(x, get_location_y())!=1 && x<=9) {
    set_location_x(x);
  }
  print_maze();
}

void move_left() {
  int x = get_location_x()-1;
  if (is_wall(x, get_location_y())!=1 && x>=0) {
    set_location_x(x);
  }
  print_maze();
}

void move_down() {
  int y = get_location_y()+1;
  if (is_wall(get_location_x(), y)!=1 && y<=9) {
    set_location_y(y);
  }
  print_maze();
}

void move_up() {
  int y = get_location_y()-1;
  if (is_wall(get_location_x(), y)!=1 && y>=0) {
    set_location_y(y);
  }
  print_maze();
}

void build_treasure(int x, int y) {
  maze[x][y].wall=2;
}