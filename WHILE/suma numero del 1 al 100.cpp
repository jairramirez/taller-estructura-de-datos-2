/*Program que suma numero de 1 al 100*/
/*septiembre 2 de 2017*/
/*relizado por jair ramírez*/
#include <stdio.h>

int main()
{
	int numero;
	int suma;
	suma=0;
	numero=1;	
	while(numero<=100)
	{
		suma=suma+numero;
		numero++;
		
	}
	printf("la suma es %d \n",suma);
	return 0;
}

