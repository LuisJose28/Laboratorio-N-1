#include <stdio.h>

/* Programa: DolaresARenminbi.c */

int main()
{
    //bloque declarativa de constantes
    #define VALOR 6.44
    
    //bloque declarativa de variables
    float dolares, renminbi;


    //Bloque de Instrucciones
    printf("Introduzca el valor que desea transformar: ");
    scanf("%f", &dolares);

    //Se calcula la conversion con la formula
    renminbi = dolares * VALOR;
    printf("La conversion a Renminbi sería: %.2f", renminbi);

    return 0;
}

