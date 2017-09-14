/*programa que lee un vector de numeros y determina el mayor*/
/*septiembre 10 de 2017*/
/*realizado por Jair Ramírez*/
#include <stdio.h>

int main()
	
{
	int i;
	int dNumeros[5];
	int dMayor=0;
	printf("ingrese los numeros del vector \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&dNumeros[i]);
	}
	for(i=0;i<5;i++)
	{
		if(dNumeros[i]>dMayor)
		{
			dMayor=dNumeros[i];
			
		}
	}
	printf("El numero mayor es: %d \n ",dMayor);
	return 0;
}

