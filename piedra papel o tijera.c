//Ricardo David Lopez Arellano
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int a,b;char n1 [10],n2 [10];
    printf("\tPIEDRA, PAPEL O TIJERA \n ");
    printf("Nombre del jugador 1: ");
    scanf ("%s",n1);
    printf("Nombre del jugador 2: ");
    scanf ("%s",n2);
    printf("\nEstas son las opciones: ");
    printf("\n 1.PIEDRA 2.PAPEL 3.TIJERA \n ");
    do{
    srand(time(NULL));
    a = 1+rand()%3;
    b = 1+rand()%3;
        if (a==1&&b==1){printf("\n Empate con piedra, Intenten de nuevo... \n ");}
        if (a==2&&b==2){printf("\n Empate con papel, Intenten de nuevo...\n");}
        if (a==3&&b==3){printf("\n Empate con tijera, Intenten de nuevo...\n ");}
        if (a==2&&b==3){printf("\n %s con tijera gana a %s con papel.\n ",n2,n1);}
        if (b==2&&a==3){printf("\n %s con tijera gana a %s con papel.\n ",n1,n2);}
        if (a==2&&b==1){printf("\n %s con papel gana a %s con piedra.\n ",n1,n2);}
        if (a==1&&b==2){printf("\n %s con papel gana a %s con piedra.\n", n2,n1);}
        if (a==1&&b==3){printf("\n %s con piedra gana a %s con tijera.\n",n1,n2);}
        if (a==3&&b==1){printf("\n %s con piedra gana a %s con tijera.\n",n2,n1);}}
        while (a==b);
        printf("\n\tFELICIDADES!! JUEGUEN DE NUEVO:)\n ");
    return 0;
}
