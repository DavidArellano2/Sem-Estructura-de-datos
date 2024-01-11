//Ricardo David Lopez Arellano
#include <stdio.h>

int main(){
    int votos=0,cont1=0,cont2=0,cont3=0,totalVotos=0,totalc1=0,totalc2=0,totalc3=0;
    float a,b,c,prom1=0,prom2=0,prom3=0;
    printf("\t Programa que cuenta los votos de la FEU\n\n");
    printf("Los candidatos son:\n");
    printf("  1 = Candidato A\n");
    printf("  2 = Candidato B\n");
    printf("  3 = Candidato C\n");

    printf("\nIntroduzca su voto(Si quiere salir ingrese 0): ");
    scanf("%d",&votos);

while(votos>0){
    if(votos==1){
    cont1++;}
    else
        if(votos==2){
            cont2++;}
            else
                if(votos==3){
                    cont3++;}
                        else
                            printf("\nEl voto esta fuera del rango");
printf("\nIntroduzca su voto de nuevo(Si quiere salir ingrese 0): ");
scanf("%d",&votos);
}
totalVotos=cont1+cont2+cont3;
totalc1=cont1;
totalc2=cont2;
totalc3=cont3;
printf("\nEl total de votos fue: %d",totalVotos);
if(cont1>cont2&&cont1>cont3)
    printf("\nGano el candidato 1 con un total de votos de: %d",totalc1);
if(cont2>cont1&&cont2>cont3)
    printf("\nGano el candidato 2 con un total de votos de: %d",totalc2);
if(cont3>cont2&&cont3>cont1)
    printf("\nGano el candidato 3 con un total de votos de: %d",totalc3);
if(cont1==cont2&&cont1==cont3)
    printf("\nLos votos resultaron en empate :( ");
}
