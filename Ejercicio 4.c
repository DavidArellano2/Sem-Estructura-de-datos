#include<stdio.h>
#include<string.h>
#define MAX_STRLEN 256

int main() {
	char letra[MAX_STRLEN];
	printf("Dame un caracter: \n");
	scanf("%s",letra);

	if (strcmp(letra,"!")==0 || strcmp(letra,"#")==0 || strcmp(letra,"$")==0 || strcmp(letra,"%")==0 || strcmp(letra,"&")==0 || strcmp(letra,"/")==0 || strcmp(letra,"(")==0 || strcmp(letra,")")==0 || strcmp(letra,"?")==0 || strcmp(letra,"=")==0 || strcmp(letra,"¡")==0 || strcmp(letra,"@")==0 || strcmp(letra,"¿")==0 || strcmp(letra,"+")==0 || strcmp(letra,"*")==0 || strcmp(letra,"]")==0 || strcmp(letra,"[")==0) {
		printf("%s es un caracter especial\n",letra);
	}
    if (strcmp(letra,"1")==0 || strcmp(letra,"2")==0 || strcmp(letra,"3")==0 || strcmp(letra,"4")==0 || strcmp(letra,"5")==0 || strcmp(letra,"6")==0 || strcmp(letra,"7")==0 || strcmp(letra,"8")==0 || strcmp(letra,"9")==0 || strcmp(letra,"0")==0) {
        printf("%s es un digito\n",letra);
		}
    if
        printf "%s es una letra \n",letra;

    if (strcmp(letra,"a")==0 || strcmp(letra,"e")==0 || strcmp(letra,"i")==0 || strcmp(letra,"i")==0 || strcmp(letra,"u")==0) {
        printf("%s es una vocal\n",letra);}

    if (strcmp(letra,"A")==0 || strcmp(letra,"E")==0 || strcmp(letra,"I")==0 || strcmp(letra,"O")==0 || strcmp(letra,"U")==0) {
        printf("%s es una vocal\n",letra);
				}
    if {
        printf("%s es una consonante\n",letra);
				}
	return 0;
}


