#include<stdio.h>

int main(){

    int opc;
    int ban;
    int cumb;
    int rock;

    printf("\n              GENEROS MUSICALES\n");
    printf("Ingresa:");
    printf("\n    1 para Banda \n    2 para Cumbia \n    3 para Rock en espanol \n");
    printf("\n Ingresa 1, 2 o 3 para su genero favorito: \n");
    scanf("%d", &opc);

    switch(opc)
    {
        case 1:

            printf("\n          Seleccionaste Banda \n");
            printf("\nCual es su banda favorita de este genero? \n");
            printf("Las bandas mas populares son: ");
            printf("\n   1 - Banda MS \n   2 - Grupo Firme \n   3 - Los Recoditos \n");
            printf("\nIngresa 1, 2 o 3 para su banda favorita: \n");
            scanf("%d", &ban);

            printf("\nCual es su cancion favorita de esta banda? \n");
            printf("Las canciones mas populares son: ");
            if(ban==1)
            printf("\n   1.-Tu postura \n   2.-El color de tus ojos \n   3.-Solo con verte \n");
            if(ban==2)
                printf("\n   1.-Yo ya no vuelvo contigo \n   2.-Cada vez te extraño mas \n   3.-Descuide\n");
            if(ban==3)
                printf("\n   1.-Perfecta \n   2.-Mi ultimo deseo\n   3.-No le hago falta \n");
            printf("\nIngresa 1, 2 o 3 para su cancion favorita: \n");
            scanf("%d", &ban);
        break;

        case 2:

            printf("\nSeleccionaste Cumbia \n");
            printf("\nCual es su banda favorita de este genero? \n");
            printf("Las bandas mas populares son: \n");
            printf("\n   1 - Los Angeles Azules \n   2 - Grupo Cañaveral \n   3 - Sonora Dinamita \n");
            printf("\nIngrese 1, 2 o 3 para su banda favorita: \n");
            scanf("%d", &cumb);

            printf("\nCual es su cancion favorita de esta banda? \n");
            printf("Las canciones mas populares son: ");
            if(cumb==1)
                printf("\n   1.- El Liston de tu Pelo \n   2.- Nunca es suficiente \n   3.- 17 años \n");
            if(cumb==2)
                printf("\n   1.- Espinas el rosal \n   2.- Echarme al olvido \n   3.- Amor a primera vista \n");
            if(cumb==3)
                printf("\n   1.- A Mover la Colita \n   2.- Que bello \n   3.- Mi Cucu \n");
            printf("\nIngresa 1, 2 o 3 para su cancion favorita: \n");
            scanf("%d", &ban);
        break;

        case 3:

            printf("\nSeleccionaste rock en español\n");
            printf("\nCual es su banda favorita de este genero? \n");
            printf("Las bandas mas populares son: \n");
            printf("\n   1 - Caifanes \n   2 - Mana \n   3 - Los hombres G\n");
            printf("\nIngrese 1, 2 o 3 para su banda favorita: \n");
            scanf("%d", &rock);

            printf("\nCual es su cancion favorita de esta banda? \n");
            printf("Las canciones mas populares son: ");
            if(rock==1)
                printf("\n   1.- La celula que explota \n   2.- No dejes que \n   3.- La negra tomasa \n");
            if(rock==2)
                printf("\n   1.- Mariposa Traicionera \n   2.- Rayando el sol \n   3.- Clavado en un bar \n");
            if(rock==3)
                printf("\n   1.- Devuelveme a mi chica \n   2.- Te quiero \n   3.- Lo noto \n");
            printf("\nIngresa 1, 2 o 3 para su cancion favorita: \n");
            scanf("%d", &ban);
        break;

        default: printf("Ese genero no esta disponible.\n");
    }
    printf("Gracias por contestar esta encuesta :)\n\n");
}
