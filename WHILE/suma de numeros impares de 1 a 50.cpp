/*programa que suma numeros impares de 1 a 50*/
/*septiembre 2 de 2017*/
/*relizado por jair ramírez*/
#include <stdio.h>

int main() 
{
	int suma;
	int numero;
	
	suma= 0;
	numero=1;
	while(numero<=50)
	{
		if(numero%2==1)
		{
			suma=suma+numero;
			numero=numero+2;
		}
	}
	printf("la suma de numeros impares es; %d",suma);
	
	return 0;
}

