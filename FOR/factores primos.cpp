#include <stdio.h>

int main()
{ 
	int i;
	int dNumero;
	int dFactor;
	int contador;
	
	printf("ingrese el numero a desconponer en factores primos\n");
	scanf("%d",&dNumero);

		for(i=2;i<=dNumero;i++)
		{
			while(dNumero%i==0)
			{
				
				printf("%d * d%",dNumero,i);
				dNumero/i;
			}
			
			
		 }
	
	
	
	return 0;
}

