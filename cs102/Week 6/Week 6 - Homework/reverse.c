/* Jacob Sigman
 * CS-102-E
 * Professor Cusack
 * Homework 6 - Reverse C File
*/

#include <stdio.h>
#include "functions.h"

int main( int argc, char** argv ) {
    int i = argc-1;
    int len = 0;
    if (argc > 1) {
        while (i > 0) {
            len = string_length(argv[i]);
            reverse_string(argv[i]);
            fprintf(stdout, "%s %d ", argv[i--], len);
        }
    }
    else {
        fprintf(stdout, "No arguments!");
    }
    fprintf(stdout, "\n");
    return 0;
}


