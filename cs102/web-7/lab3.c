#include <stdio.h>
int main (int argc, char** argv) {
    fprintf(stdout,"Content-type: text/html\n\n");
    fprintf(stdout,"<TITLE>Lab 3</TITLE>\n");
    fprintf(stdout,"<h1>Lab 3</h1>\n");
    fprintf(stdout,"<html>\n");
    fprintf(stdout,"<body>\n");
    fprintf(stdout,"<table>\n");
    for (int x = 0; x<100; x=x+1) {
        fprintf(stdout,"<tr><td>%d</td></tr>\n", x+1);
    }
    fprintf(stdout,"</table>\n");
    fprintf(stdout,"</html>\n");
    fprintf(stdout,"</body>\n");
    return 0;
}  
