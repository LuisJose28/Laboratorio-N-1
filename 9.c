#include <stdio.h>

/* Programa: SeguroEducativo.c */

int main()
{
    //bloque declarativa de constantes
    #define SEGURO 0.0125
    
    //bloque declarativa de variables
    float salarioMensual, calculoSeguro, salarioTotal;

    //Bloque de Instrucciones
    printf("\nIntroduzca su salario mensual: ");
    scanf("%f", &salarioMensual);
    
    //Se calcula el descuento 
    calculoSeguro = salarioMensual * SEGURO;
    printf("\nEl descuento del seguro educativo seria: %.2f", calculoSeguro);
    
    //Se descuenta el calculo del seguro de tu salario mensual
    salarioTotal = salarioMensual - calculoSeguro;
    printf("\nSu salario total seria de: %.2f", salarioTotal);
    
   
    return 0;
}
