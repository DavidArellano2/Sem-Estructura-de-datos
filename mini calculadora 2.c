//Ricardo David Lopez Arellano
#include <stdio.h>
#include <stdlib.h>

int main(){
    int opc=0,fac=0,i,numero2;
    float numero,x;
    char seguir;
    printf("\t MINI CALCULADORA\n\n");
    printf("Las opciones son:\n");
    printf("  1.Calcular la tabla de multiplicar del numero que quiera. \n");
    printf("  2.Calcular el factorial de un numero.\n");
    printf("  3.Mostrar los números primos que hay menores del valor que indiques.\n");
    printf("\nIntroduce la opcion que gustes (Si quiere salir ingresa 0): ");
    scanf("%ld",&opc);
    while(opc==1){
        {
        int i, numero,salir;
        do
        {
            printf( "\nIntroduzca un numero: ", 163 );
            scanf( "%d", &numero );
            printf( "\n  La tabla de multiplicar del %d es:\n", numero );

            for ( i = 1 ; i <= 10 ; i++ )
                printf( "\n   %d * %d = %d", i, numero, i * numero );
            printf( "\n\nSi quiere ver otra tabla ingrese cualquier numero, si desea salir presione 0: ");
            scanf( "%d", &salir );
        } while ( salir != 0 );}}
////////////////////////////////////////////////////////////////////////////////
        while(opc==2){
            {
            int i, numero,salir;
            do
            {
                printf( "\nIntroduzca un numero: ", 163 );
                scanf( "%d", &numero );
                printf( "\n  La tabla de multiplicar del %d es:\n", numero );

                for ( i = 1 ; i <= 10 ; i++ )
                    printf( "\n   %d * %d = %d", i, numero, i * numero );
                printf( "\n\nSi quiere ver otra tabla ingrese cualquier numero, si desea salir presione 0: ");
                scanf( "%d", &salir );
            } while ( salir != 0 );}}

}

