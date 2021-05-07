/* Jacob Sigman
 * CS-102-E
 * Professor Cusack
 * lab4.c
*/

#include <stdio.h>
int main( int argc, char** argv ) {
    int i = argc-1;
    if (i > 1) {
        while (i > 0) {
            fprintf(stdout, "%s ", argv[i--]);
        }
    }
    else {
        fprintf(stdout, "No arguments!");
    }
    fprintf(stdout, "\n");
    return 0;
}