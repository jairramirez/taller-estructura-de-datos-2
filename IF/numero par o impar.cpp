/*Programa que muestra si un numero es par o impar*/
/*septiembre 1 de 2017*/
/*Realizado por: Jair Ramírez*/
#include <stdio.h>

int main() 
{
	int numero;
	int par;
	int impar;
	int resultado;
	printf("ingrese un numero \n");
	scanf("%d",&numero);
	if(numero%2==0)
	{
		printf("el numero es par");
		
	}else{
		printf("el numero es impar");
		
	}
	
	return 0;
}

