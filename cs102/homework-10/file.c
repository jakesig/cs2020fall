/*Jacob Sigman
 *CS-102-E
 *Homework 10
 *File C File
 */

#include <stdio.h>
#include "file.h"
#include "maze.h"

void save( char* filename ) {
  FILE* to_write = fopen(filename, "w");
  if (to_write != NULL ) {
    for (int i=0; i<10; i++) {
      for (int j=0; j<10; j++) {
        if (is_wall(i, j)==1) {
	  fprintf(to_write, "WALL %d %d\n", i, j);
        }
        else if (is_wall(i, j)==2) {
	  fprintf(to_write, "TREASURE %d %d\n", i, j);
        }
      }
    }
    fprintf(to_write, "X %d\n", get_location_x());
    fprintf(to_write, "Y %d\n", get_location_y());
    fclose(to_write);
  }
  print_maze();
}

void load( char* filename ) {
  clear_maze();
  FILE* file;
  char read[1024];
  int spotx;
  int spoty;
  file = fopen( filename, "r" );
  if (file != NULL ) {
    while ( fgets( read, 1024, file ) != NULL ) {
      if (sscanf(read, "WALL %d %d", &spotx, &spoty) == 2) {
	build_wall(spotx, spoty);
      }
      else if (sscanf(read, "X %d", &spotx) == 1) {
	set_location_x(spotx);
      }
      else if (sscanf(read, "Y %d", &spoty) == 1) {
	set_location_y(spoty);
      }
      else if (sscanf(read, "TREASURE %d %d", &spotx, &spoty) == 2) {
	build_treasure(spotx, spoty);
      }
    }
  }
  fclose(file);
  print_maze();
}