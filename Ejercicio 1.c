#include<stdio.h>

int main() {
	float a,b,c,d;
	printf("Eliga la operacion:\n");
	printf("1=Suma\n");
	printf("2=Resta\n");
	printf("3=Multiplicacion\n");
	printf("4=Division\n");
	scanf("%s",a);
	printf("Introduzca dos cifras\n");
	scanf("%f",&b);
	if (b<0) {
		printf("Este numero no es valido, Introduzca otro\n");
		scanf("%f",&b);
	}

	if (c==0) {
		printf("Valor 0 no sirve\n");
		scanf("%f",&c);
	}
	if (a==1) {
		printf("Vas a sumar\n");
		d = b+c;
	}
    if (a==2) {
        printf("Vas a restar\n");
        d = b-c;
		}
    if (a==3) {
        printf("Vas a multiplicar\n");
        d = b*c;
			}
    if (a==4) {
        printf("Vas a dividir\n");
        d = b/c;
				}
	printf("Tu resultado es:\n");
	printf("%f\n",d);
	return 0;
}

