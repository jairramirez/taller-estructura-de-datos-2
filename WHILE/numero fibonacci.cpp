/*Program que soluciona numero fibonacci*/
/*septiembre 2 de 2017*/
/*relizado por jair ramírez*/
#include <stdio.h>

int main() 
{
	int anterior;
	int siguiente;
	int actual;
	int numero;
	printf("ingrese un numero hasta donde se va a calcular el fibonacci \n");
	scanf("%d",&numero);
	anterior=0;
	actual=1;
	int contador=1;
	printf("el fibonacci de %d es \n",numero);
	while(contador<=numero)
	{
		siguiente=actual+anterior;
		anterior=actual;
		actual=siguiente;
		contador++;
		printf("%d ",actual);
	}   
	
	
	return 0;
}

