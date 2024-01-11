#include<stdio.h>
#include<string.h>

int main() {
	int hijos,opc,cond1,escolar,cond2,viuda,total;
    printf("    **  PROGRAMA SUBSIDIO   **\n");
    printf("\n Es usted viuda? (1)Si (2)No: ");
    scanf("%d",&opc);

    switch(opc){
         case 1:
         printf("\n Introduce la cantidad de hijos que tienes: ");
         scanf("%d",&hijos);
         printf("\n Introduce la cantidad de hijos en edad escolar (de 6 a 18 a%cos): ",164);
         scanf("%d",&escolar);

         if (hijos<=0){
            cond1 = 0;
         }
         if ((hijos>=1)&&(hijos<=2)){
            cond1 = 200;
         }
         else
         if ((hijos>=3)&&(hijos<=5)){
            cond1 = 400;
         }
         else
         if(hijos>=6){
            cond1 = 600;
        }
        if (escolar<=0){
            cond2=0;
        }
        else
        if((escolar>=1)&&(escolar<=hijos)) {
            cond2 = 100* escolar;
        }
        if (hijos>=1){
            viuda = 150;}
        else
        if (hijos<=0 ){
            viuda = 0;}
        total = cond1+cond2+viuda;

         printf("\n El subsidio total es: %d\n",total);
         break;
getch();
return 0;
}}
