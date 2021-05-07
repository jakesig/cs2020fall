/* Jacob Sigman
 * CS-102-E
 * Professor Cusack
 * lab5a.c
*/

#include <stdio.h>
int string_length(char* string);

int main( int argc, char** argv ) {
    int i = argc-1;
    int len = 0;
    if (i > 1) {
        while (i > 0) {
            len = string_length(argv[i]);
            fprintf(stdout, "%s %d ", argv[i--], len);
        }
    }
    else {
        fprintf(stdout, "No arguments!");
    }
    fprintf(stdout, "\n");
    return 0;
}

int string_length(char* string) {
    return 42;
}