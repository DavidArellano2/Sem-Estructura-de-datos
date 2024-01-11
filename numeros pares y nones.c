#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int a,b,suma,multi,poten;

    printf("        Programa que recibe 2 numeros y realiza una operacion\n\n");
    printf("Ingresa el valor 1: ");
    scanf("%d",&a);
    printf("Ingresa el valor 2: ");
    scanf("%d",&b);

    suma = a+b;
    multi=a*b;
    poten=pow(a,b);

    if ((a%2==0)&&(b%2==0)){
        printf("La suma de los 2 numeros es: %d", suma);
    }
    if ((a%2!=0)&&(b%2!=0)){
        printf("La Multiplicacion de los 2 numeros es: %d", multi);
        }
    {
    if (a<b);{
        printf("%d^%d=%d",a,b,poten);
    }
}
}
