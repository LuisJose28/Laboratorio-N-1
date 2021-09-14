#include <stdio.h>

/* Programa: Conversion.c */

int main()
{
    //bloque declarativa de constantes
#define IMPUESTO 0.07

    //bloque declarativa de variables
    float precioUno,precioDos, calculoImpuesto, pagoTotal;

    //Bloque de Instrucciones
    printf("Introduzca el precio del primer producto: ");
    scanf("%f", &precioUno);
    printf("Introduza el precio del segundo producto: ");
    scanf("%f", &precioDos);

    //Se calculo el impuesto a pagar
    calculoImpuesto = (precioUno + precioDos) * IMPUESTO;
    printf("Impuesto a agregar seria de: %.2f", calculoImpuesto);

    //Se calcula el total a pagar
    pagoTotal = (precioUno + precioDos) + calculoImpuesto;
    printf("\nEl total a pagar seria de: %.2f", pagoTotal);


    return 0;
}
