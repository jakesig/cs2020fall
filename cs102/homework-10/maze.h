/*Jacob Sigman
 *CS-102-E
 *Homework 10
 *Maze H File
 */

typedef struct { int wall; } room_t;

void move_right();
void move_left();
void move_up();
void move_down();
void set_location_x(int x);
int get_location_x();
void set_location_y(int y);
int get_location_y();
void print_maze();
void clear_maze();
int is_wall(int x, int y);
void build_wall(int x, int y);
void clear_wall(int x, int y);
void build_treasure(int x, int y);