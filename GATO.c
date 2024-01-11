#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int filas=3, columnas=3;
    char gato[filas][columnas];
    char letra='A';
    char casilla;
    char marca='X';
    int ContadorDeRepGato=0;
    bool ganador=false;

    //llenar el gato
   for(int filas1=0; filas1<3; filas1++){
        for(int columnas1=0; columnas1<3; columnas1++){
            gato[filas1][columnas1]= letra++;
        }
   }

   do{
   //Imprimir arreglo
    if(ContadorDeRepGato%2==0){
        marca='X';
    }
    else{
        marca='O';
    }

   for(int filas1=0; filas1<3; filas1++){
        for(int columnas1=0; columnas1<3; columnas1++){
            printf("%c ", gato[filas1][columnas1]);
            fflush(stdin);
        }
        printf("\n");
   }

   printf("Dame la letra donde quieres poner tu marca: %c \n", marca);
   scanf("%c", &casilla);

   switch(casilla){
    case 'a':
    case 'A':
            if(gato[0][0]=='A'){
            gato[0][0]=marca;
            ContadorDeRepGato++;
            }else{
                printf("La casilla no esta disponible.\n");
            }
       break;

    case 'b':
    case 'B':
            if(gato[0][1]=='B'){
            gato[0][1]=marca;
            ContadorDeRepGato++;
            }else{
                printf("La casilla no esta disponible.\n");
            }
       break;

    case 'c':
    case 'C':
            if(gato[0][2]=='C'){
            gato[0][2]=marca;
            ContadorDeRepGato++;
            }else{
                printf("La casilla no esta disponible.\n");
            }
       break;

    case 'd':
    case 'D':
            if(gato[1][0]=='D'){
            gato[1][0]=marca;
            ContadorDeRepGato++;
            }else{
                printf("La casilla no esta disponible.\n");
            }
       break;

    case 'e':
    case 'E':
            if(gato[1][1]=='E'){
            gato[1][1]=marca;
            ContadorDeRepGato++;
            }else{
                printf("La casilla no esta disponible.\n");
            }
       break;

    case 'f':
    case 'F':
            if(gato[1][2]=='F'){
            gato[1][2]=marca;
            ContadorDeRepGato++;
            }else{
                printf("La casilla no esta disponible.\n");
            }
       break;

    case 'g':
    case 'G':
            if(gato[2][0]=='G'){
            gato[2][0]=marca;
            ContadorDeRepGato++;
            }else{
                printf("La casilla no esta disponible.\n");
            }
       break;

    case 'h':
    case 'H':
            if(gato[2][1]=='H'){
            gato[2][1]=marca;
            ContadorDeRepGato++;
            }else{
                printf("La casilla no esta disponible.\n");
            }
       break;

    case 'i':
    case 'I':
            if(gato[2][2]=='I'){
            gato[2][2]=marca;
            ContadorDeRepGato++;
            }else{
                printf("La casilla no esta disponible.\n");
            }
       break;

    default:
            printf("Opcion no valida...\n");
        break;
    }
    if(ContadorDeRepGato>5){
        if((gato[0][0]==marca&&gato[0][1]==marca&&gato[0][2]==marca)||
           (gato[1][0]==marca&&gato[1][1]==marca&&gato[1][2]==marca)||
           (gato[2][0]==marca&&gato[2][1]==marca&&gato[2][2]==marca)||
           (gato[0][0]==marca&&gato[1][1]==marca&&gato[2][2]==marca)||
           (gato[0][2]==marca&&gato[1][1]==marca&&gato[2][0]==marca)||
           (gato[0][0]==marca&&gato[1][0]==marca&&gato[2][0]==marca)||
           (gato[0][1]==marca&&gato[1][1]==marca&&gato[2][1]==marca)||
           (gato[0][2]==marca&&gato[1][2]==marca&&gato[2][2]==marca)){

                printf("Gano el jugador %c\n", marca);
                ganador=true;
                break;
        }
    }
}while(ContadorDeRepGato<9);

if(!ganador){
    printf("Juego empatado\n");
}
    return 0;
}
