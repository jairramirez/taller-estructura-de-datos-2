/*programa que calcula el area de un triangulo*/
/*Agosto 28 de 2017*/
/*Realizado por:Jair Ramírez*/
#include <stdio.h>

int main() 
{
	
	float area;
	float base;
	float altura;
	printf("ingrese base \n");
	scanf("%f",&base);
	printf("ingrese altura \n");
	scanf("%f",&altura);
	area=(base*altura/2);
	printf("el area es: %f \n",area);
	
	
	return 0;
}

