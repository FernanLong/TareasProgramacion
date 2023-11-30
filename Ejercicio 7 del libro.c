#include <stdio.h>
/* copia la entrada a la salida; la . versión */
main( )
{
int c;
c = getchar( );
while (c != EOF) {
putchar(c);
c = getchar( );
}
}
