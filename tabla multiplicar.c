#include <stdio.h>

int main()
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
    } while ( salir != 0 );
}
