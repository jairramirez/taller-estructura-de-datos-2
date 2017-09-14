/*Programa que lee  un vector de numeros y muestra los numeros con sus indices*/
	/*septiembre 9 de 2017*/
	/*Realizado por Jair Ramírez*/
	
#include <stdio.h>
	
int main() 
{
	int dNumero[5];
	int i;
	printf("Ingrese los numeros \n");
	for(i=0;i<5;i++)
	{  
		scanf("%d",&dNumero[i]);
		
	}
	for(i=0;i<5;i++)
	{  
		
		printf("posicion %d numero %d \n",i, dNumero[i]);
	}
	
	return 0;
	
}






