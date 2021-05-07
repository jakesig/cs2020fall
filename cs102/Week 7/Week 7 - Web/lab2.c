#include <stdio.h>
int main (int argc, char** argv) {
    fprintf(stdout,"Content-type: text/html\n\n");
    fprintf(stdout,"<TITLE>Lab 2</TITLE>\n");
    fprintf(stdout,"<h1>Lab 2</h1>\n");
    fprintf(stdout,"<html>\n");
    fprintf(stdout,"<body>\n");
    for (int x = 0; x<100; x=x+1) {
        fprintf(stdout,"<p>%d</p>\n", x+1);
    }
    fprintf(stdout,"</html>\n");
    fprintf(stdout,"</body>\n");
    return 0;
}  
