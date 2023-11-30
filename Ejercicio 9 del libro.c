#include <stdio.h>
/*cuenta los caracteres de la entrada; la. versión */
main( )
{
long nc;
nc = 0 ;
while (getchar( ) != EOF)
++nc;
printf("%ld\n", nc);
}
