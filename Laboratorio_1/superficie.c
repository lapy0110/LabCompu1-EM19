#include<stdio.h>

void main(){
    int ancho, largo, superficie;

    printf("Introduzca el largo de la sala: ");
    scanf("%d",&largo);
    
    printf("Introduzca el ancho de la sala: ");
    scanf("%d",&ancho);
    
    superficie=ancho*largo;

    printf("La superficie de la sala es: %d",superficie);
    printf("\n");
}