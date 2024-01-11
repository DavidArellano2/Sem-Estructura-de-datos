#include <conio.h>
#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, n5, mayor,menor;

    printf("Introduce el primer numero: ", 163 );
    scanf( "%d", &n1 );
    printf("Introduce el segundo numero: ", 163 );
    scanf( "%d", &n2 );
    printf("Introduce el tercer numero: ", 163 );
    scanf( "%d", &n3 );
    printf("Introduce el cuarto numero: ", 163 );
    scanf( "%d", &n4 );
    printf("Introduce el quinto numero: ", 163 );
    scanf( "%d", &n5 );

    if ( n1 > n2 )
        if ( n1 > n3 )
            mayor = n1;
            if ( n1 > n4 )
                mayor = n1;
                if ( n1 > n5)
                    mayor = n1;
    if (n2 > n1)
        if ( n2 > n3 )
            mayor = n2;
            if ( n2 > n4 )
                mayor = n2;
                if ( n2 > n5)
                    mayor = n2;
    if (n3 > n1)
        if ( n3 > n2 )
            mayor = n3;
            if ( n3 > n4 )
                mayor = n3;
                if ( n3 > n5)
                    mayor = n3;

    printf( "\n   %d es el mayor.", mayor );

    if ( n1 < n2 )
        if ( n1 < n3 )
            menor = n1;
            if ( n1 < n4 )
                menor = n1;
                if ( n1 < n5)
                    mayor = n1;
    if (n2 < n1)
        if ( n2 < n3 )
            menor = n2;
            if ( n2 <n4 )
                menor = n2;
                if ( n2 < n5)
                    menor = n2;
    if (n3 < n1)
        if ( n3 < n2 )
            menor = n3;
            if ( n3 < n4 )
                menor = n3;
                if ( n3 < n5)
                    menor = n3;

    printf( "\n   %d es el menor.", menor );
    return 0;
}
