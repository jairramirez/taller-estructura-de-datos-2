/*Programa que lee 5 numeros en un arreglo y los copie en otro arreglo multiplicados por 2 y los muestre en  */
/* en el segundo arreglo*/
/*septiembe 10 de 2017*/
/*realizado por: Jair Ramírez*/
#include <stdio.h>

int main() 
{
	int i;
	int dNumeros[5];
	int dNumeros2[5];
	printf("Ingrese numeros \n ");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&dNumeros[i]);
		
	}
	for(i=0;i<5;i++)
	{
		dNumeros2[i]=dNumeros[i]*2;
	}
	for(i=0;i<5;i++)
	{
		printf("Los numeros multiplicados por 2 en posición %d son %d \n",i,dNumeros2[i]);
	}
	
	
	return 0;
}



