/*programa que resuelve el factorial de un numero*/
/*septiembre 2 de 2017*/
/*relizado por jair ramírez*/
#include <stdio.h>

int main() 
{
	int numero;
	int factorial;
	int contador;
	printf("ingrese el numero a calcular factorial \n ");
	scanf("%d",&numero);
	factorial=1;
	contador=1;
	while(contador<=numero)
	{
		factorial=factorial*contador;
		contador++;
		
	}
	printf("%d ",factorial);
	return 0;
}

