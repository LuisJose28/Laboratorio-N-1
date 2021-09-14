#include <stdio.h>

/* Programa: TotalaPagar.c */

int main()
{
    //bloque declarativa de constantes
    #define IMPUESTO  0.07
    
    //bloque declarativa de variables
    float precioUno, calculoImpuesto, TotalAPagar;

    //Bloque de Instrucciones
    printf("\nIntroduzca el precio del  producto: ");
    scanf("%f", &precioUno);
    
    //Se calcula el impuesto a pagar
    calculoImpuesto = precioUno * IMPUESTO;
    printf("\nEl impuesto a aplicar seria de : %.2f", calculoImpuesto);
    
    //Calcular total a pagar 
    TotalAPagar = precioUno + calculoImpuesto;
    printf("\nEl precio total a pagar es: %.2f", TotalAPagar);
    
   
    return 0;
}
