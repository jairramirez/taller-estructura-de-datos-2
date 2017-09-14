/*programa que calcula area,diametro y longitud de una circunferencia*/
/*septiembre 1 de 2017*/
/*Realizado por: Jair Ramírez*/
#include <stdio.h>
#include <conio.h>
int main()
{ 
	float radio;
	float area;
	float diametro;
	float longitud;
	printf(" \n ingrese el radio de la circunferencia \n ");
	scanf("%f",&radio);
	area= 3.1416*(radio*radio);
	diametro = 2*radio;
	longitud = 2*3.1416*radio;
	
	
	printf("\n circunferencia con radio: %f\n el area es: %f \n diametro de la circunferencia: %f\n longitud de la circunferencia: %f",radio,area,diametro,longitud);
	
	
	getch();
	return 0;
}

