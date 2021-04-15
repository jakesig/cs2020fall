#include <stdio.h>
int main( int argc, char **argv )
{
int x = -100;
int y = 0;
int yprime = 0;
int yint = 0;
int ysum = 0;
fprintf( stdout, "x,y,yprime,ysum\n" );
while( x <= 100 )
{

y = (5*x*x*x)-(6*x*x)+(8*x);
yprime = (y-((5*(x-4)*(x-4)*(x-4))-(6*(x-4)*(x-4))+(8*(x-4))))/4;
yint =((y+((5*(x-4)*(x-4)*(x-4))-(6*(x-4)*(x-4))+(8*(x-4))))/2)*4;
ysum = ysum + yint;
fprintf( stdout, "%d,%d,%d,%d\n", x, y, yprime, ysum );
x = x + 4;
}
return 0;
}
