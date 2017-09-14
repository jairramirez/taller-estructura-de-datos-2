/*Programa que define un vector de numeros y calcula su producto*/
/*septiembre 9 de 2017*/
/*Realizado por Jair Ramírez*/

#include <stdio.h>

int main() 
{
	int dNumero[5];
	int i;
	int dProducto=1;
	for(i=0;i<5;i++)
	{  
		dNumero[i]=i+1;
		printf("posicion %d numero %d \n",i, dNumero[i]);
		dProducto=dProducto*dNumero[i];
		
		
		
	}
	printf("la suma es %d ",dProducto);
	return 0;
	
}



