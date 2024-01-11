#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int a,b,c,opc;
    main(){
        printf("        Programa para ordenar tres valores proporcionados\n\n");
        printf("Ingrese los enteros que quiere ordenar: ");
        scanf(" %d %d %d",&a,&b,&c);

            if(a<b)
            {
                if (a<c)
                {
                if (b<c)
                {printf("Los valores ordenados de menor a mayor son: %d %d %d\n\n", a,b,c);}
                else
                {printf("Los valores ordenados de menor a mayor son: %d %d %d\n\n", a,c,b);}
                }
                else
                {printf("Los valores ordenados de menor a mayor son: %d %d %d\n\n", c,a,b);}
                }
            else
                {
                if (a<c)
                {printf("Los valores ordenados de menor a mayor son: %d %d %d\n\n", b,a,c);}
                else
                {if (c<b)
                {printf("Los valores ordenados de menor a mayor son: %d %d %d\n\n", c,b,a);}
                else
                {printf("Los valores ordenados de menor a mayor son: %d %d %d\n\n", b,c,a);}}
                }
            if(a>b)
            {
                if (a>c)
                {
                if (b>c)
                {printf("Los valores ordenados de mayor a menor son: %d %d %d\n\n", a,b,c);}
                else
                {printf("Los valores ordenados de mayor a menor son: %d %d %d\n\n", a,c,b);}
                }
                else
                {printf("Los valores ordenados de mayor a menor son: %d %d %d\n\n", c,a,b);}
                }
            else
                {
                if (a>c)
                {printf("Los valores ordenados de mayor a menor son: %d %d %d\n\n", b,a,c);}
                else
                {if (c>b)
                {printf("Los valores ordenados de mayor a menor son: %d %d %d\n\n", c,b,a);}
                else
                {printf("Los valores ordenados de mayor a menor son: %d %d %d\n\n", b,c,a);}}
                }
    system("pause");
}

