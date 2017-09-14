/*programa que calcula de una suma de potencias */
/*septiembre 4 de 2017*/
/*relizado por jair ramírez*/
#include <stdio.h>
#include <math.h>

int main()
{
	int i;
	int j;
	int n;
	int b;
	float fPotencia;
	float fSuma;
	printf("ingrese base \n");
	scanf("%d",&b);
	printf("ingrese el numero de potencias que quiere sumar \n");
	scanf("%d",&n);
	fPotencia;
	fSuma=0;
	
	
	for(j=1;j<=n;j++){
		fPotencia=pow(b,j);
		fSuma=fSuma+fPotencia;
	}
	
	
	
	printf("la suma  es %f \n",fSuma);
	printf("la potencia es %f \n",fPotencia);
	return 0;
}

