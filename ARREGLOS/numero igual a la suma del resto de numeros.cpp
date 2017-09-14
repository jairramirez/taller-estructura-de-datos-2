/*Programa que define un vector de numeros y calcula si hay un numero cuyo valor se igual a la suma del resto de numeros del vector*/
/*septiembe 10 de 2017*/
/*realizado por: Jair Ramírez*/
#include <stdio.h>

int main() 
{
	int i;
	int dNumeros[5];
	int dNumeroSuma;
	int dSuma=0;
	printf("Ingrese numeros del vector \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&dNumeros[i]);
		
	}
	for(i=0;i<5;i++)
	{
		dSuma=dSuma+dNumeros[i];
	}
	dNumeroSuma=999999999;
	
	for(i=0;i<5;i++)
	{
		if(dNumeros[i]==dSuma-dNumeros[i]){
			dNumeroSuma=dNumeros[i];
			
		}
		
		
		
	}
	if(dNumeroSuma==999999999)
	{printf("no hay numero que sea igual a la suma del resto de numeros");
	}else{printf("El numero igual a la suma del resto de numero es %d",dNumeroSuma);
	
	
	}
	
	
	
	return 0;
}

