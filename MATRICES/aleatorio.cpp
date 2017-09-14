/*Programa que pregunta numero de filas y columnas,*/
/*llena la matriz con numeros aleaotorios y la muestra en patalla*/
/*Septiembre 12 de 2017*/
/*realizado por:Jair Ramírez*/
#include <stdio.h>
#include <time.h>
#include<stdlib.h>

int main()
{
	int dMatriz[100][100];
	int dMatriz2[100][100];
	int i,j;
	int dFilas;
	int dColumnas;
	int dNumero;
	srand(time(0));
	printf("Ingrese numero de filas \n");
	scanf("%d",&dFilas);
	printf("Ingrese numero de columnas \n");
	scanf("%d",&dColumnas);
	
	for(i=0;i<dFilas;i++)
	{
		
		for(j=0;j<dColumnas;j++)
		{
			dNumero= 1 + rand()%50;
			dMatriz[i][j]=dNumero;
		}
	}
	for(i=0;i<dFilas;i++)
	{
		for(j=0;j<dColumnas;j++)
		{
			dMatriz2[i][j]=dMatriz[i][j];
		}
		
	}
	
	printf("mostrando matriz copiada \n");
	for(i=0;i<dFilas;i++)
	{
		for(j=0;j<dColumnas;j++)
		{
			printf("%d ",dMatriz2[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}




