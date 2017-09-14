/*programa que determina si un numero es positivo o negativo*/
/*septiembre 2 de 2017*/
/*Realizado por: Jair Ramírez*/
#include <stdio.h>

int main()
{
	int numero;
	int positivo;
	int negativo;
	printf("ingrese un numero \n");
	scanf("%d",&numero);
	if(numero>0)
	{
		printf("el numero es positivo");
	}else{
		printf("el numero es negativo");
	}
	
	
	return 0;
}

