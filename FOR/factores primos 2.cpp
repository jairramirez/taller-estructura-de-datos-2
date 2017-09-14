/*programa que escompone un nuero en factores primos*/
/*septiembre 6 de 2017*/
/*relizado por jair ramírez*/
#include <stdio.h>

int main() 
{
	int dNumero;
	int dFactor;
	printf("ingrese el numero a descomponer en factores primos \n");
	scanf("%d",&dNumero);
	for(dFactor=2;dFactor<=dNumero;dFactor++)
		while(dNumero%dFactor==0)
	{
		printf("numero	%d	|	%d \n",dNumero,dFactor);
		dNumero/=dFactor;
	}
		
		return 0;
}

