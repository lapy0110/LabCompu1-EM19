// AreaCircunferencia.c
// Programa que calcula el area de una circunferencia recibiendo el radio como entrada
// Autor: Luis Alfonso Pino - www.github.com/lapy0110

#include<stdio.h>

int main(){
    // Variables
    int Radio;
    float Pi=3.14, Area;

    // Operaciones
    scanf("%d",&Radio);
    Area = Pi*Radio*Radio;
    printf("%f",Area);
    return 0;
}