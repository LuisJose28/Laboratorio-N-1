#include <stdio.h>

/* Programa: Temperatura.c */

int main()
{
    //bloque declarativa de variables
    float fahrenheit, celsius;
    
    //Bloque de Instrucciones
    printf("Introduzca la temperatura que desea convertir: ");
    scanf("%f", &fahrenheit);

    //Se calcula la conversion con la formula
    celsius = ((fahrenheit - 32) * 5 ) / 9;

    printf("La conversion a celsius es: %.2f", celsius);
    
    return 0;
}
