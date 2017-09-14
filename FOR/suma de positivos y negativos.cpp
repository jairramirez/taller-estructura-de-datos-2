/*programa que calcula la suma de numero que se restan en forma consecutiva*/
/*1-2+3-4+5-6.....n*/
/*septiembre 5 de 2017*/
/*relizado por jair ramírez*/
#include <stdio.h>

int main() 
{
	int i;
	int j;
	int dSumaNegativos;
	int dSumaPositivos;
	int dSumaGeneral;
	int dNumeros;
	int resultado;
	int dNegativos;
	printf("ingrese la cantidad de numeros a sumar\n");
	scanf("%d",&dNumeros);
	dSumaPositivos=0;
	for(i=1;i<dNumeros;i+=2)
	{
		dSumaPositivos=dSumaPositivos+i;
		
	}
	printf("\n");
	dSumaNegativos=0;
	for(j=2;j<=dNumeros;j+=2)
	{
		dNegativos=j*(-1);
		dSumaNegativos=dSumaNegativos+dNegativos;
		
	}
	dSumaGeneral=dSumaPositivos + dSumaNegativos;
	printf("la suma es %d \n ",dSumaGeneral);
	return 0;
}

