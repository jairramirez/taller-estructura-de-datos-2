/*Programa que pide una cadena de caracteres,la almacena en un arreglo y lo copia en otro arreglo*/
/*Septiembre 13 de 2017*/
/*Realizado por:Jair Ramírez*/
#include <stdio.h>

int main() 
{
	char sCadena1[100];
	char sCadena2[100];
	int i;
	printf("Ingrese la cadena de caracteres \n");
	fgets(sCadena1, 100,stdin);
	for(i=0;i<100;i++)
	{
		if (sCadena1[i]!= '\0')
		{
			
			sCadena2[i]=sCadena1[i];	
			
		}else{
			break;
		}
		
	}
	printf("Mostrando la cadena guarda \n");
	printf("%s",sCadena2);
	return 0;
}

	
