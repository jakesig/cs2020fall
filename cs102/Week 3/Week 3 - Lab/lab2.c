#include <stdio.h>
int main( int argc, char **argv )
{
int x = 0;
int y = 0;
int yprime = 0;
fprintf( stdout, "x,y,yprime\n" );
while( x <= 200 )
{

y = 1 + (x*x);
yprime = (y-(1+((x-2)*(x-2))))/2;
fprintf( stdout, "%d,%d,%d\n", x, y, yprime );
x = x + 2;
}
return 0;
}
