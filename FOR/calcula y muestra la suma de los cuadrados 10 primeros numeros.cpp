/*Programa que calcula y muestra la suma de los cuadrados de los primeros 10 numeros*/
/*septiembre 6 de 2017*/
/*Realizado por: Jair Ramírez*/
#include <stdio.h>

int main() 
{
	int i;
	int suma;
	int contador;
	int cuadrado;
	suma=0;
	contador=0;
	for(i=1;i<=10;i++)
	{
		cuadrado=i*i;
		contador=cuadrado;
		suma=suma+contador;
		contador++;
		printf("el cuadrado de %d es %d \n",i,cuadrado);
	}
	printf("la suma de los cuadrados es %d ",suma);
	return 0;
}

