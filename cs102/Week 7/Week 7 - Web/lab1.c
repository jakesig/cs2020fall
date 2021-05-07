#include <stdio.h>
int main (int argc, char** argv) {
    fprintf(stdout,"Content-type: text/html\n\n");
    fprintf(stdout,"<TITLE>Lab 1</TITLE>\n");
    fprintf(stdout,"<h1>Lab 1</h1>\n");
    fprintf(stdout,"<html>\n");
    fprintf(stdout,"<body>\n");
    for (int x = 0; x<100; x=x+1) {
        fprintf(stdout,"<p>Line</p>\n");
    }
    fprintf(stdout,"</html>\n");
    fprintf(stdout,"</body>\n");
    return 0;
}  
