//Lopez Arellano Ricardo David
//Orden inverso

#include<stdio.h>

int main(void){
    char arr[20];
    int cont=0;
    int a;
    printf("\t Programa que determina el orden inverso de una palabra \n\n");
    printf("Ingresa una palabra: ");
    scanf ("%s",arr);
    printf("\nLa palabra ingresada es: %s\n", arr);

    while (arr[cont]!=0){
        cont++;
    }
    printf("\nY tiene %d elementos \n", cont);

    for (cont=0;cont<10;cont++){
        printf("%c",arr[cont]);
    }
    printf("\n\nLa palabra al reves es:\n\t");
    for (a=cont-1; a>=0; a--){
        printf("%c", arr[a]);
    }
}
