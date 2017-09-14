/*Programa que tenga un cadena la palabra buenos dias, crea otra cadena con el nombre de usuario y añade al final*/
/* de la primera cadena el nombre y muestra el mensaje completo*/
/*septiembre 13 de 2017*/
/*Realizado por:Jair Ramírez*/
#include <stdio.h>

int main()
{    
	char sPalabra1[]="Buenos dias ";
	char sPalabra2[]="¿cual es su nombre?";
	char sPalabra3[100];
	char sPalabra4[100];
	int dContador=0;
	int dContador2=0;
	int i;
	printf("%s \n%s \n",sPalabra1,sPalabra2);
	scanf("%s",&sPalabra3);
	for(i=0;i<100;i++)
	{
		if(sPalabra1[i]!='\0')
		{   
			sPalabra4[i]=sPalabra1[i];
			dContador++;
		}
		else{
			break;
		}
		
	}
	for(i=dContador;i<100;i++)
	{   
		if(sPalabra3[dContador2]!='\0')
		{
			sPalabra4[i]=sPalabra3[dContador2];
			dContador2++;
		}else
		{
			break;
		}
	}
	printf("%s",sPalabra4);
	
	
	
	
	
	return 0;
}

