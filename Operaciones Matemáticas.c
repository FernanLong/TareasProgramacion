/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int suma(int num1,int num2){
    int resultado = num1 + num2; 
    return resultado;
}
int resta(int num1,int num2) {
    int resultado = num1 - num2; 
    return resultado;
}

int multi(int num1,int num2) {
    int resultado = num1 * num2; 
    return resultado;
}

int divi(int num1,int num2) {
    int resultado = num1 / num2; 
    return resultado;
}

void main()
{
    int num1=0;
    int num2=0;
    printf("Actividad 4 operaciones matematicas.\n");
    printf("Introduce un primer valor \n");
    scanf("%d", &num1);
    printf("Introduce un segundo valor \n");
    scanf("%d", &num2);
    printf("Los resultados son:\n Suma %d" , suma(num1,num2));
    printf("\n Resta %d", resta(num1,num2));
    printf("\n Multiplicación %d ",multi(num1,num2));
    printf("\n División %d ",divi(num1,num2));
}
