#include <stdio.h>
/* cuenta las líneas de la entrada */
main( )
{
int c, ni;
ni = 0 ;
while ((c = getchar()) != EOF)
if (c == '\n')
++ni;
printf("%d\n", ni);
}
