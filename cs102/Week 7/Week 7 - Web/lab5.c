#include <stdio.h>
int main (int argc, char** argv) {
    fprintf(stdout,"Content-type: text/html\n\n");
    fprintf(stdout,"<TITLE>Lab 5</TITLE>\n");
    fprintf(stdout,"<h1>Lab 5</h1>\n");
    fprintf(stdout,"<html>\n");
    fprintf(stdout,"<body>\n");
    fprintf(stdout,"<table>\n");
    fprintf(stdout,"<tr><th>N</th><th>100xN</th></tr>\n");
    for (int x = 0; x<100; x=x+1) {
        fprintf(stdout,"<tr><td>%d</td><td>%d</td></tr>\n", x+1, (x+1)*100);
    }
    fprintf(stdout,"</table>\n");
    fprintf(stdout,"</html>\n");
    fprintf(stdout,"</body>\n");
    return 0;
}  
