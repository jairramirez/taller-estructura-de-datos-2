/*programa calculo dolares*/
/*septiembre 1 de 2017*/
/*Realizado por:Jair Ramírez*/
#include <stdio.h>

int main()
{
	float valorDolar;
	float cantidadDolares;
	float totalDineroDolares;
	printf("ingrese valor dolar \n");
	scanf("%f",&valorDolar);
	printf("ingrese cantidadDolares \n");
	scanf("%f",&cantidadDolares);
	totalDineroDolares=(valorDolar*cantidadDolares);
	printf("el valor total de dolares es %f \n ",totalDineroDolares);
	
	return 0;
}

