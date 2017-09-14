/*programa que compara un numero con una lista de numeros y determina si coinside con alguno de la lista*/
/*septiembre 2 de 2017*/
/*Realizado por: Jair Ramírez*/
#include <stdio.h>

int main() 
{  
	float numeroUno;
	float numeroDos;
	float numeroTres;
	float numero;
	printf("ingrese tres numeros \n");
	scanf("%f ",&numeroUno);
	scanf("%f",&numeroDos);
	scanf("%f",&numeroTres);
	printf("ingrese numero a comparar \n");
	scanf("%f",&numero);
	if(numero==numeroUno)
	{
		printf("el numero es igual a %f",numeroUno);
		
	}else{
		if(numero==numeroDos)
		{
			printf("el numero es igual a %f",numeroDos);	
		}else{
			if(numero==numeroTres)
			{
				printf("el numero es igual %f",numeroTres);
			}
			else{
				printf("el numero no coinside con algun numero de la lista");
			}
		}
	}
	
	
	return 0;
}

