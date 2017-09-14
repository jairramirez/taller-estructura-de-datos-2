/*Programa que define un vector de numeros y calcula su suma*/
/*septiembre 9 de 2017*/
/*Realizado por Jair Ramírez*/

#include <stdio.h>

int main() 
{
	int dNumero[5];
	int i;
	int dSuma=0;
	for(i=0;i<5;i++)
	{  
		dNumero[i]=i;
		printf("posicion %d numero %d \n",i, dNumero[i]);
		dSuma=dSuma+dNumero[i];
		
		
		
	}
	printf("la suma es %d ",dSuma);
	return 0;
	
}

