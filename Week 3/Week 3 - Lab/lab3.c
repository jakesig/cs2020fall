#include <stdio.h>
int main( int argc, char **argv )
{
int x = 0;
int y = 0;
int yprime = 0;
int yint = 0;
fprintf( stdout, "x,y,yprime,yint\n" );
while( x <= 200 )
{

y = 1 + (x*x);
yprime = (y-(1+((x-2)*(x-2))))/2;
yint = ((y+(1+((x-2)*(x-2))))/2)*2;
fprintf( stdout, "%d,%d,%d,%d\n", x, y, yprime, yint );
x = x + 2;
}
return 0;
}
