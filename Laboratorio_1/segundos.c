/*
 CI2125/CI2127 - Computación 1
 Laboratorio Sem 2 - Ejercicio A
 Circulo.c
 Autor: Luis Pino
*/

#include<stdio.h>

void main(){
    // Variables
    int segundos,minutos,horas,dias;

    // Introducción de datos
    printf("Introduzca el tiempo en segundos: ");
    scanf("%d",&segundos);

    printf("----------------------------------------------------\n");
    
    // Calculos
    minutos=segundos/60;
    segundos=segundos%60;

    horas= minutos/60;
    minutos= minutos%60;

    dias = horas/24;
    horas= horas%24;

    //Salida
    printf("Su tiempo queda correctamente expresado como: \n");
    printf("%d", dias);
    printf(" dias, ");
    printf("%d", horas);
    printf(" horas, ");
    printf("%d", minutos);
    printf(" minutos, ");
    printf("%d", segundos);
    printf(" segundos. \n");

}