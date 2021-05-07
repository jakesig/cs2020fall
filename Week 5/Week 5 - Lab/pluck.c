#include <stdio.h>
#include <stdlib.h>
#include "pluckfunc.h"
int main( int argc, char **argv )
{
  srand48(getpid());
  printrandomstuff();
  return 0;
}
