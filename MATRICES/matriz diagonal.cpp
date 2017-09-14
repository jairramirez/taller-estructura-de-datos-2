#include <stdio.h>
/*Programa que muestra matriz diagonal.
12-9-2017
realizado por jair ramirez*/
int main()
{
	int dMatriz[3][3];
	int i,j; 
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			dMatriz[i][j];
		} 
	} 
	printf("Mostrar Matriz:\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				dMatriz[i][j]=1;
			}else
			{
				dMatriz[i][j]=0;
			} 
			printf("%d",dMatriz[i][j]);
		}
		printf("\n");
	} 
	return 0;
}








