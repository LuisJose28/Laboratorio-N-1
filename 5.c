#include <stdio.h>

/* Programa: PrecioDeUnProducto.c */

int main()
{
    //bloque declarativa de constantes
    #define DESCUENTO  25
    
    //bloque declarativa de variables
    float precioInicial, rebaja, precioFinal;

    //Bloque de Instrucciones
    printf("Introduzca el precio del  producto: ");
    scanf("%f", &precioInicial);
    
    //Calcular de cuanto sera el descuento
    rebaja = (precioInicial * DESCUENTO) / 100;
    printf("El descuento a aplicar seria de : %.2f", rebaja);
    
    //Calcular total a pagar 
    precioFinal = precioInicial - rebaja;
    printf("\nEl precio total a pagar es: %.2f", precioFinal);
    
   
    return 0;
}
