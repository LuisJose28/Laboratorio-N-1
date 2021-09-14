#include <stdio.h>

/* Programa: Promedio.c */

int main()
{
    //bloque declarativa de variables
    float nota_Uno,nota_Dos,nota_Tres,nota_Cuatro,nota_Cinco;
    float nota_Total; //Sumatoria de las 5 (cinco) notas
    float resultado;

    //Bloque de Instrucciones
    printf("Introduzca la primera calificacion: ");
    scanf("%f", &nota_Uno);
    printf("Introduzca la segunda calificacion: ");
    scanf("%f", &nota_Dos);
    printf("Introduzca la tercera calificacion: ");
    scanf("%f", &nota_Tres);
    printf("Introduzca la cuarta calificacion: ");
    scanf("%f", &nota_Cuatro);
    printf("Introduzca la quinta calificacion: ");
    scanf("%f", &nota_Cinco);

    //Sumatoria de todas las notas
    nota_Total = nota_Uno + nota_Dos + nota_Tres + nota_Cuatro + nota_Cinco;

    //Se calcula el promedio final
    resultado = (nota_Total / 5);
    printf("El promedio final es: %.2f", resultado);

  
    return 0;
}
