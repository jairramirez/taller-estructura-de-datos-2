/*programa que suma los numeros pares de 1 a 50*/
/*septiembre 2 de 2017*/
/*relizado por jair ramírez*/
#include <stdio.h>

int main()
{
	int suma;
	int numero;
	
	suma= 0;
	numero=2;
	while(numero<=50)
	{
		if(numero%2==0)
		{
			suma=suma+numero;
			numero=numero+2;
		}
	}
	printf("la suma de numeros pares es; %d",suma);
	
	return 0;
}

