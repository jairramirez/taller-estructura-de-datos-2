/*Programa que lee numeros hasta que se introduzca el numero 0 y muestra los numeros leidos*/
/*septiembre 2 de 2017*/
/*relizado por jair ramírez*/

#include <stdio.h>

int main() 
{
	float numero;
	float contador;
	contador=0;
	do{
		printf("ingrese un numero \n");
		scanf("%f",&numero);
		if(numero>0){
			contador=contador+1;
		}
	}
	while(numero!=0);
	
	printf("el numero de valores mayores a cero es %f ",contador);
	
	return 0;
}

