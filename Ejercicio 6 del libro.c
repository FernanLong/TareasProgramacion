#include <stdio.h>
#define LOWER 0 /* límite inferior de la tabla »*/
#define UPPER 300 /* limite superior */
#define STEP 20 /* tamaño del incremento */
/*16 INTRODUCCION GENERAL CAPITULO 1*/
/* imprime la tabla Fahrenheit-Celsius */
main( )
{
int fahr;
for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
}
