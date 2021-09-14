#include <stdio.h>

/* Programa: GalonesaLitros.c */

int main()
{
    //bloque declarativa de variables
    float galones, litros;


    //Bloque de Instrucciones
    printf("Introduzca los galones que desea convertir: ");
    scanf("%f", &galones);

    //Se calcula la conversion con la formula
    litros = (3.7854118 * galones);
    printf("Los galones convertidos a litros son: %.2f", litros);

    return 0;
}
