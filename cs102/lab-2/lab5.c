#include <stdio.h>
int main (int argc, char **argv)
{

for (int i = 0; i < 10; i = i + 1 )
{
fprintf (stdout, "Hello, world!\n");
}
fprintf (stdout, "Something Else\n");
for (int i = 0; i < 10; i = i + 1 )
{
fprintf (stdout, "Goodbye, world!\n");
}
return 0;
}
