//Ricardo David Lopez Arellano
#include <stdio.h>
#include <stdlib.h>
int num_minimo=1,num_maximo=20;
int aleatorio(num_minimo,num_maximo);
int respuesta, intentos = 0;
int main(){
  srand(getpid());
  int secreto = aleatorio(num_minimo, num_maximo);
  printf("Genere un valor aleatorio entre 1 y 20 y tienes que adivinarlo: ");
  printf("\nSolo tienes 4 intentos ...\n");
  while (4) {
    intentos++;
    printf("\nEscribe el numero que crees que ingrese: ");
    scanf("%d", &respuesta);
    if (respuesta == secreto) {
      printf("GANASTE!!! \nEl numero que ingrese fue %d y lo adivinaste en %d ""intento(s)",secreto, intentos);
      break;}
    else if (respuesta<secreto) {
      printf("Error, ese no es el numero pero te dare una pista: El numero que ingrese es mayor que %d\n",respuesta);}
    else {
      printf("Error, ese no es el numero pero te dare una pista: el numero que ingrese es menor que %d\n",respuesta);}
    if (intentos >= 4) {
      printf("\n\nPERDISTE!!!  El numero que escogi fue %d\n\n", secreto);
      break;}
  }
}
int aleatorio(int num_minimo, int num_maximo){
return num_minimo+rand()/(RAND_MAX / (num_maximo-num_minimo+1)+1);}
