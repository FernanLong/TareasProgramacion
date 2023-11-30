#include <stdio.h>
/* cuenta los caracteres de la entrada; 2 a. versión */
main( )
{
double nc;
for (nc = 0; getchar( ) != EOF; ++nc)
printf("\n%.0f", nc);
}
