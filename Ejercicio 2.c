#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horas_trabajadas = 0;
    float salario_bruto = 0.0;
    float precio_hora = 0.0;
    float salario_neto = 0.0;
    float impuesto = 0.0;
    float prestaciones = 0.0;
    float precio_a = 80.00;
    float precio_b = 120.00;
    float h_extras = 0.0;
    float extras = 0.0;

    printf("      CALCULAR EL SALARIO DE ACUERDO A LA CATEGORIA\n");
    printf("Categorias: \n");
    printf("  Categoria 1: $80.00\n");
    printf("  Categoria 2: $120.00\n");
    printf("Horas Trabajadas: ");
    scanf(" %d",&horas_trabajadas);
    printf("A cuanto te pagan la hora? (en cantidad): ",161);
    scanf(" %f",&precio_hora);
    printf("La hora extra se paga al doble y no puedes trabajar mas de 5\n");
    printf("Cuantas horas extras trabajaste? ");
    scanf("%f",&h_extras);

    // Realizar calculos
    salario_bruto = horas_trabajadas * precio_hora;
    impuesto = salario_bruto -(precio_hora*0.02);
    prestaciones =salario_bruto+(precio_hora*0.05);
    extras=(h_extras*precio_hora);
    salario_neto = salario_bruto + prestaciones+extras;
    // Visualización de resultados
    printf("=======================================================\n");
    printf("Horas : %d -> Precio de la Hora: %.2f\n",horas_trabajadas,precio_hora);
    printf("=======================================================\n");
    printf("**** Salario Sin extras: %.2f\n",salario_bruto);
    printf("**** Salario total: %.2f\n",salario_neto);

    return 0;
}
