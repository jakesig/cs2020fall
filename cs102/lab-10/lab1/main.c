#include <stdio.h>
typedef struct { int wall; } room_t;
int main( int argc, char** argv ) {
  room_t maze[10];
  int i;
  for( i=0; i<10; i++ ) {
    maze[i].wall=0;
  }
  maze[3].wall=1;
  for( i=0; i<10; i++ ) {
    if ( maze[i].wall == 1) {
      fprintf( stdout, "##");
    }
    else {
      fprintf( stdout, ". ");
    }
  }
  fprintf( stdout, "\n");
  return 0;
}
