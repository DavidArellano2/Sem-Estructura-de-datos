//Lopez arellano ricardo david
//estaturas

#include<stdio.h>

int main (){
    float est[10];
    float prom=0;
    int i;
    printf("\t Programa para determinar la estatura de 10 personas y lo promedia \n\n");
        for (i=0;i<10;i++){
        printf("Dame la estatura %d:  ",i+1);
        scanf("%f",&est[i]);
        prom=prom+est[i];
        printf("\n");
        if (est[i]==0){
            break;
        }
        if (est[i]<=0){
            break;
        }
    }
    printf("El promedio de las estaturas es: %.2f", prom/i);
    return 0;
}
