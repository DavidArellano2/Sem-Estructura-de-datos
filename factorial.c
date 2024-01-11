#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    // Variables a utilizar
    long int Resultado=0;
    long int Factorial;

    // Solicitar numero para calcular el factorial
    printf("Introduzca No. para calcular el factorial ...: ");
    scanf(" %ld", &Factorial);
    // Calcular el factorial del numero solicitado
    Resultado = 1;
    while(Factorial > 1) {
       Resultado *= Factorial;
       printf(" %ld x",Factorial);
       Factorial--;
    }
    printf(" 1 = %ld\n\n",Resultado);

  system("PAUSE");
  return 0;
}
