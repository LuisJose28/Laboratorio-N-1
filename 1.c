#include <stdio.h>

/* Programa: Promedio.c */


int main()
{
    //bloque declarativa de variables
    float notaUno,notaDos,notaTres,notaCuatro,notaCinco;
    float notaTotal; //Sumatoria de las 5 (cinco) notas
    float resultado;

    //Bloque de Instrucciones
    printf("Introduzca la primera calificacion: ");
    scanf("%f", &notaUno);
    printf("Introduzca la segunda calificacion: ");
    scanf("%f", &notaDos);
    printf("Introduzca la tercera calificacion: ");
    scanf("%f", &notaTres);
    printf("Introduzca la cuarta calificacion: ");
    scanf("%f", &notaCuatro);
    printf("Introduzca la quinta calificacion: ");
    scanf("%f", &notaCinco);

    //Sumatoria de todas las notas
    notaTotal = notaUno + notaDos + notaTres + notaCuatro + notaCinco;

    //Se calcula el promedio final
    resultado = (notaTotal / 5);
    printf("El promedio final es: %.2f", resultado);



    return 0;
}
