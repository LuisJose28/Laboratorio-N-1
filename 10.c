#include <stdio.h>

/* Programa: Distancia.c */

int main()
{
    //bloque declarativa de variables
    float velocidad, tiempo, distancia;
    //Bloque de Instrucciones
    printf("Introduzca la velocidad: ");
    scanf("%f", &velocidad);
    
    printf("Introduzca el tiempo: ");
    scanf("%f", &tiempo);

    //Se calcula la distancia
    distancia = velocidad * tiempo;
    
    //Se transforma de km a metros
    distancia = distancia * 1000;
    printf("\nLa distancia recorrida es: %.2f metros", distancia);
    
    return 0;
}
