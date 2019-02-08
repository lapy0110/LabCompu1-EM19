#include<stdio.h>

void main(){
    float radio, pi=3.14, area, perimetro, volumenesfera;

    printf("Inserte el radio de la circunferencia: ");
    scanf("%f",&radio);

    area = pi * radio * radio;
    perimetro = 2*pi*radio;
    volumenesfera = (4*pi*radio*radio*radio)/4;

    printf("_________________________________________\n");
    printf("Area: %f \n",area);
    printf("Perimetro: %f \n",perimetro);
    printf("Volumen: %f \n",volumenesfera);

}