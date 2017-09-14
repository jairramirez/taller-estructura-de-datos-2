/*Programa que rellena una matriz pidiendo al usuario numero filas y columnas,*/
/* posteriormente mustra la matriz en pantalla*/
/*septiembre 11 de 2017*/
/*realizado por :Jair Ramírez*/
#include <stdio.h>

int main() 
{   int i;
int j;
int dMatriz[100][100];
int dFi;
int dCo;
printf("Ingrese numeros de filas \n");
scanf("%d",&dFi);
printf("Ingrese numeros de columnas\n");
scanf("%d",&dCo);
printf("ingrese numeros \n");
for(i=0;i<dFi;i++)
{
	for(j=0;j<dCo;j++)
	{
		scanf("%d",&dMatriz[i][j]);
	}
}
for(i=0;i<dFi;i++)
{
	for(j=0;j<dCo;j++)
	{
		printf("%3d",dMatriz[i][j]);
	}
	printf("\n");
}
return 0;
}

