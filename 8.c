#include <stdio.h>

/* Programa: SalarioMensual.c */

int main()
{
    //bloque declarativa de constantes
    #define HORAS_SEMANALES 45

    //bloque declarativa de variables
    float pagoHora, pagoMensual;
    
    //Bloque de Instrucciones
    printf("Ingrese la cantidad de pago por Hora: ");
    scanf("%f", &pagoHora);

    //Se calcula el pago mensual
    pagoMensual = ((pagoHora * HORAS_SEMANALES) * 4);

    printf("\nSu salario Mensual seria de: %.2f dolares", pagoMensual);
    
    return 0;

}
