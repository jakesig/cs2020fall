#include <stdio.h>
typedef struct { int wall; } room_t;

static room_t maze[10];

void clear_maze();
int is_wall(int x);
void build_wall(int x);
void clear_wall(int x);

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