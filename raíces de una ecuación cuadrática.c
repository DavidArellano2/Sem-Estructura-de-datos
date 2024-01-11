#include<stdio.h>

/* Para leer variables de texto se utiliza scanf, que lee solo una palabra. 
   Para leer una linea completa (es decir, incluyendo los espacios en blanco)
   se debe utilzar ges (ej, reemplazar scanf("%s",x) por gets(x)) pero 
   obliga a agregar un getchar() antes del gets si antes del mismo se leyó
   otra variable con scanf. */

/* Lopez Arellano Ricardo David */
/* Factorial de un numero */
int main() {
	int fac;
	float numero;
	float x;
	printf("Dame un numero: \n");
	scanf("%s",numero);
	if (numero>0) {
		x = 1;
		fac = 1;
		while (x<=numero) {
			fac = fac*x;
			x = x+1;
		}
		printf("El factorial del numero es %f = %i\n",numero,fac);
	} else {
		printf("El numero %fno se puede calcular\n",numero);
	}
	return 0;
}

