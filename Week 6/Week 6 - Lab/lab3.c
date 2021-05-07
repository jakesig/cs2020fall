/* Jacob Sigman
 * CS-102-E
 * Professor Cusack
 * lab3.c
*/

#include <stdio.h>
int main( int argc, char** argv ) {
    int i = 1;
    if (argc>1) {
        while (i < argc) {
            fprintf(stdout, "%s ", argv[i++]);
        }
    }
    else {
        fprintf(stdout, "No arguments!");
    }
    fprintf(stdout, "\n");
    return 0;
}