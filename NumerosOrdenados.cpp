#include <stdio.h>  //include printf y scanf

#include <conio.h> //include getch

#include <stdlib.h>//incluye las funciones aleatorias, entre otras

#include <time.h>//incluye las funciones temporales

int numeros[10000];


void pensarnumeros(void);

void ordenarnumeros(void);

int N,i,j; //declaro las variables para guardar la cantidad de numeros

int main (int)

{

printf("\n***************************************************");

printf("\n* Programa que crea y ordena N n£meros aleatorios *");

printf("\n***************************************************");

printf("\n\n ¨Cuantos numeros desea crear aleatoriamente? (max 10000) N=");

scanf("%d",&N);

pensarnumeros();

ordenarnumeros();

getch();

}

void pensarnumeros(void)

{

int conta=0;

//funcion que inicializa las secuencias de los numeros aleatorios

srand((unsigned)time(NULL));

printf("\nCreados:\n");

//Los imprimo de 15 en 15

for(i=0;i<N;i++){

conta++;

numeros[i]=rand()/2;

printf(" %d ",numeros[i]);

//Cuando al hacer la division entre 15 me da de resto 0 pongo un cambio de linea

if(conta % 15 == 0)printf("\n");

}

 

}

void ordenarnumeros(void)

{

//Ordeno los numeros de menor a mayor

int j,k,t,conta=0;

for(j=1;j<N;j++)

 for(k=0;k<N-1;k++)

 {

  if(numeros[k+1]<numeros[k])

  {

  t=numeros[k];

  numeros[k]=numeros[k+1];

  numeros[k+1]=t;

  }

 }

 printf("\nOrdenados:\n");

for(i=0;i<N;i++){

conta++;

printf(" %d ",numeros[i]);

if(conta % 15 == 0)printf("\n");

}

}
