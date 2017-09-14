/*Programa que lee valores enteros hasta que se lee un numero en el rango de 20-30 o cero*/
/*septiembre 5 de 2017*/
/*relizado por jair ramírez*/
#include <stdio.h>

int main()
{
	int numero;
	int suma;
	int contador;
	suma=0;
	contador=1;
	
	do{
		printf("ingrese un numero \n");
		scanf("%d",&numero);
		if(numero>0)
		{   contador=numero;
		suma=suma+contador;
		contador++;
		}
		
	}while((numero<20 || numero >30) && numero!=0);
	
	printf("la suma de numeros mayores a cero es %d",suma);
	return 0;
}

