// Mayor.c
// Programa que calcula el mayor entre 3 numeros
// Autor: Luis Alfonso Pino - www.github.com/lapy0110

#include<stdio.h>

int main(){
    // Variables
    int a,b,c;
    int mayor;
    scanf("%d", &a ,&b ,&c);

    //Operaciones
    if (a>b){
        if (a<c){
            mayor=a;
        }
    }

    return 0;
}