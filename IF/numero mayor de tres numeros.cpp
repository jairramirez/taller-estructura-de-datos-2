/*programa que lee tres numeros y determina cual es el mayor*/
/*septiembre 1 de 2017*/
/*Realizado por: Jair Ramírez*/
#include <stdio.h>

int main()
{
	int numeroMayor;
	int numeroUno;
	int numeroDos;
	int numeroTres;
	
	printf("ingrese tres numeros \n");
	scanf("%d  %d  %d",&numeroUno,&numeroDos,&numeroTres);
	if(numeroUno>numeroDos && numeroUno>numeroTres)
	{
		numeroMayor=numeroUno;
	}
	if(numeroDos>numeroUno && numeroDos>numeroTres)
	{
		numeroMayor=numeroDos;
	}
	if(numeroTres>numeroUno && numeroTres>numeroDos)
	{
		numeroMayor=numeroTres;
	}
	printf("el numero mayor es: %d",numeroMayor);
	   
	
	return 0;
}

