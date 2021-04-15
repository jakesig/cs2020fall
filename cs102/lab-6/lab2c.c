/* Jacob Sigman
 * CS-102-E
 * Professor Cusack
 * lab2c.c
*/

#include <stdio.h>
int main( int argc, char** argv ) {
    int i = 1;
    while (i < argc) {
        fprintf(stdout, "%s ", argv[i++]);
    }
    fprintf(stdout, "\n");
    return 0;
}