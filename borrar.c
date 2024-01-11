//Videojuego
//Ricardo David Lopez Arellano
//Lo hice en repl.it

#include <stdio.h>
#define col 15
#define row 15

int main (void){
  char personaje='o';
  char personajeG='O';
  char fondo=' ';
  char enemigo='@';
  char hongo='*';
  char mundo[row][col];
  int pX=5,pY=0;
  int eX=6,eY=6;
  int hX=1,hY=1;
  char dir;

do{
  //iniciar fondo
  for (int j=0;j<row;j++)
    for (int i=0;i<col;i++){
       printf("\n\n\n\n ");
      if (i==0||j==0||j==row-1||i==col-1)
          mundo[j][i]='|';
      else
        mundo[j][i]=fondo;
    }
//barreras
  //entrada y salida
  mundo[0][5]=' ';
  mundo[12][14]=' ';

//Linea Principal
  mundo[0][1]='_';
  mundo[0][2]='_';
  mundo[0][3]='_';
  mundo[0][4]='|';
  mundo[0][0]='_';
  mundo[0][6]='|';
  mundo[0][7]='_';
  mundo[0][8]='_';
  mundo[0][9]='_';
  mundo[0][10]='_';
  mundo[0][11]='_';
  mundo[0][12]='_';
  mundo[0][13]='_';
  mundo[0][14]='_';
  //Linea Final
  mundo[14][1]='_';
  mundo[14][2]='_';
  mundo[14][3]='_';
  mundo[14][4]='_';
  mundo[14][5]='_';
  mundo[14][6]='_';
  mundo[14][7]='_';
  mundo[14][8]='_';
  mundo[14][9]='_';
  mundo[14][10]='_';
  mundo[14][11]='_';
  mundo[14][12]='_';
  mundo[14][13]='_';
  //Obstaculos
  mundo[1][6]='|';
  mundo[1][4]='|';
  mundo[2][4]='|';
  mundo[1][1]='_';
  mundo[2][2]='|';
  mundo[3][4]='|';
  mundo[3][2]='|';
  mundo[4][2]='|';
  mundo[4][3]='_';
  mundo[4][4]='_';
  mundo[4][5]='_';
  mundo[4][6]='_';
  mundo[4][7]='|';
  mundo[3][7]='|';
  mundo[2][8]='_';
  mundo[1][7]='_';
  mundo[1][8]='_';
  mundo[1][9]='_';
  mundo[1][10]='_';
  mundo[3][9]='|';
  mundo[4][9]='|';
  mundo[3][11]='|';
  mundo[2][12]='_';
  mundo[1][12]='_';
  mundo[1][11]='_';
  mundo[1][12]='|';
  mundo[4][11]='|';
  mundo[5][11]='|';
  mundo[6][11]='|';
  mundo[4][9]='|';
  mundo[5][9]='|';
  mundo[6][10]='_';
  mundo[6][9]='_';
  mundo[6][8]='_';
  mundo[5][8]='_';
  mundo[5][7]='_';
  mundo[5][6]='_';
  mundo[5][5]='_';
  mundo[5][4]='_';
  mundo[5][3]='|';
  mundo[5][1]='_';
  mundo[6][7]='_';
  mundo[6][8]='_';
  mundo[6][6]='_';
  mundo[6][2]='_';
  mundo[8][3]='|';
  mundo[9][3]='|';
  mundo[7][3]='|';
  mundo[7][5]='|';
  mundo[8][5]='|';
  mundo[9][5]='|';
  mundo[6][1]='_';
  mundo[9][6]='_';
  mundo[9][7]='_';
  mundo[9][8]='_';
  mundo[9][9]='_';
  mundo[9][13]='_';
  mundo[9][12]='_';
  mundo[9][6]='_';
  mundo[8][9]='|';
  mundo[9][9]='|';
  mundo[7][8]='_';
  mundo[8][7]='|';
  mundo[9][11]='|';
  mundo[8][11]='|';
  mundo[9][1]='_';
  mundo[10][1]='_';
  mundo[9][2]='_';
  mundo[10][2]='_';
  mundo[11][3]='|';
  mundo[12][3]='|';
  mundo[13][3]='|';
  mundo[11][5]='|';
  mundo[12][5]='|';
  mundo[13][5]='|';
  mundo[13][6]='_';
  mundo[13][7]='_';
  mundo[13][8]='_';
  mundo[13][9]='_';
  mundo[13][11]='|';
  mundo[13][13]='_';
  mundo[12][9]='|';
  mundo[13][9]='|';
  mundo[13][12]='_';
  mundo[11][12]='_';
  mundo[11][13]='_';
  mundo[11][11]='|';
  mundo[10][10]='_';
  mundo[11][9]='|';
  mundo[11][7]='|';
  mundo[12][7]='|';
  mundo[10][6]='_';
  mundo[12][12]='_';
  mundo[12][13]='_';
  mundo[2][13]='_';

//poner el personaje
  mundo[pY][pX]=personaje;
//Poner hongos
  mundo[hX][hY]=hongo;
    if(pX==hX&&pY==hY)personaje=personajeG;
    if (personaje==personajeG)hongo = ' ';
//Poner enemigo
  mundo[eX][eY]=enemigo;
    if (mundo[pY][pX]==enemigo)personaje='o';
    if (mundo[pY][pX]==enemigo)enemigo=' ';
//imprimir el mundo
  printf("\033[0;0H\033[2]");
  for(int j=0;j<row;j++){
    for (int i=0;i<col;i++)
       printf("%c",mundo[j][i]);
    printf("\n");
  }
  printf("\n");
  scanf(" ");
  scanf("%c",&dir);
  switch(dir){
		case 'a':if(mundo[pY][pX-1]!='|')pX--;break;
		case 'd':if(mundo[pY][pX+1]!='|')pX++;break;
		case 's':if (pY<14)pY++;break;
		case 'w':if (pY>1)pY--;break;
		case 'p': break;
    }

  }while(dir!='p');
 return 0;
}
