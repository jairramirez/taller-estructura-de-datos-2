/*Programa que define dos vectores de caracteres y almcena el contenido de ambos*/
/* en un tercer vector mostrando el primer vector seguido del segundo*/
/*septiembe 10 de 2017*/
/*realizado por: Jair Ramírez*/
#include <stdio.h>

int main() 
{
	char i;
	char cLetras1[]={'v','a','l','e','r','i','a','	'};
	char cLetras2[]={'r','a','m','i','r','e','z'};
	char cLetras3[15];
	
	
	for(i=0;i<8;i++)
	{
		cLetras3[i]=cLetras1[i];
		
	}
	for(i=8;i<15;i++)
	{
		cLetras3[i]=cLetras2[i-8];
	}
	for(i=0;i<15;i++)
	{
		printf("%c",cLetras3[i]);
	}
	
	
	return 0;
}



