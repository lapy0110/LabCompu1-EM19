/*
 CI2125/CI2127 - Computación 1
 Laboratorio Sem 2 - Ejercicio B
 Circulo.c
 Autor: Luis Pino
*/

#include<stdio.h>

void main(){
    // Variables 
    float radio, pi=3.14, area, perimetro, volumenesfera;

    // Entrada de Datos
    printf("Inserte el radio de la circunferencia: ");
    scanf("%f",&radio);

    // Calculos 
    area = pi * radio * radio;
    perimetro = 2*pi*radio;
    volumenesfera = (4*pi*radio*radio*radio)/4;

    // Salida de Información
    printf("_________________________________________\n");
    printf("Area: %f \n",area);
    printf("Perimetro: %f \n",perimetro);
    printf("Volumen: %f \n",volumenesfera);

}