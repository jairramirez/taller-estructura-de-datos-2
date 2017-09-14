/*Programa que contiene un menú que arroja cubo y potencia de un numero*/
/*septiembre 6 de 2017*/
/*Realizado por: Jair Ramírez*/
#include <stdio.h>

int main()
{
	int i;
	int dNumero;
	float fCubo;
	float fPar;
	float fImpar;
	int dOpcion;
	
	printf("Buenos dias, digite una  opcion \n");
	
	while(dOpcion!=4)
	{
		printf(">>>>>>>>>>MENU<<<<<<<<<<< \n");
		printf("1. hallar cubo de un numero \n");
		printf("2.mostrar si un numero es par o impar \n");
		printf("3.Salir \n");
		scanf("%d",&dOpcion);
		
		switch(dOpcion)
		{
		case 1: printf("ingrese numero \n");
		scanf("%d",&dNumero);
		fCubo=dNumero*dNumero*dNumero;
		
		printf("El cubo es: %f \n ",fCubo);
		break;
		case 2: printf("Ingrese numero \n");
		scanf("%d",&dNumero);
		if(dNumero%2==0)
		{
			printf("El numero es par \n");
		}else{
			printf("El numero es impar \n");
		}
		
		break;
		
		case 3: break;
		}
		
		
	}
	
	
	
	
	return 0;
}

