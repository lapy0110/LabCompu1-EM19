/*
 CI2125/CI2127 - Computación 1
 Laboratorio Sem 2 - Ejercicio A
 Circulo.c
 Autor: Luis Pino
*/
#include<stdio.h>

void main(){
    // Variables
    int ancho, largo, superficie;

    // Entrada de Datos
    printf("Introduzca el largo de la sala: ");
    scanf("%d",&largo);
    
    printf("Introduzca el ancho de la sala: ");
    scanf("%d",&ancho);
    
    // Calculos
    superficie=ancho*largo;
    
    // Salida
    printf("La superficie de la sala es: %d",superficie);
    printf("\n");
}