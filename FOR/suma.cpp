/*programa que calcula la suma de n numeros continuos*/
/*septiembre 5 de 2017*/
/*relizado por jair ramírez*/
#include <stdio.h>

int main()
{
	int i;
	int dn;/*n es el numero hasta donde se va a calcular la suma*/
	int dSuma;
	printf("ingrese numero hasta donde se va a realizar la suma \n");
	scanf("%d",&dn);
	dSuma=0;
	
	for(i=1;i<=dn;i++)
	{
		dSuma=dSuma+i;
		
		
		
	}
	printf("la suma es %d \n",dSuma);
	
	return 0;
}

