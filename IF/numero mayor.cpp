/*programa que lee dos numeros y determina cual de ellos es el mayor*/
/*septiembre 1 de 2017*/
/*Realizado por: Jair Ramírez*/
#include <stdio.h>

int main() 
{
	int numeroMayor;
	int numeroUno;
	int numeroDos;
	
	printf("ingrese dos numeros \n");
	scanf("%d %d",&numeroUno,&numeroDos);
	if(numeroUno>numeroDos)
	{
		numeroMayor=numeroUno;
		
	}else{numeroMayor=numeroDos;}
	
	
	printf("el numero mayor es: %d  \n",numeroMayor);
	return 0;
}

