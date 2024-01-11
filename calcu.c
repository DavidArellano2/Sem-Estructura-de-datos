//Ricardo David Lopez Arellano
#include <conio.h>
#include <stdio.h>
int main(){

    int n1, n2,i,j,resultado=0,n,primo,opcion,t;

        printf( "\n\tMENU CALCULADORA " );
        printf("\nLas opciones son:\n");
        printf( "\n  1. Calcular la tabla de multiplicar del numero que quiera.", 163 );
        printf( "\n  2. Restar dos numeros.", 163 );
        printf( "\n  3. Mostrar los numeros primos que hay menores de el valor que indiques.", 163 );
        printf( "\n  4. Salir.\n" );
        do
        {
            printf( "\nIntroduzca opcion (1-4): ");
            scanf( "%d", &opcion);
            switch ( opcion )
            {
                case 1: printf( "\nIntroduzca un numero: ", 163 );
                          scanf( "%d", &n1 );
                        printf("\n Hasta que numero? ");
                          scanf("%d",&t);
                          for ( i=t ; i>=1  ;i-- )
                          printf( "\n   %d * %d = %d", i, n1, i * n1 );
                          break;

                case 2: printf("Introduzca un numero para calcular su factorial: ",163);
                          scanf(" %d", &n1);
                          resultado = 1;
                          while(n1 > 1) {
                             resultado *= n1;
                             printf(" %d x",n1);
                             n1--;
                          }
                          printf(" 1 = %d\n",resultado);
                          break;

                case 3: printf("Hasta cual numero primo deseas mostrar: ",163);
                            scanf("%d", &n1);
                            n = 2;
                            while (n1 > 0) {
                            primo = 1;
                            for (j = 2; j < n; ++j) {
                            if (n%j==0) {
                            primo=0;
                            break;}}
                            if (primo) {
                            printf("%d ", n);
                            n1--;}
                            n++;}
                          break;
            }
    } while ( opcion!=4 );
    return 0;
}
