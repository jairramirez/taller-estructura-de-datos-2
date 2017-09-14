/*programa que determina estudiantes que aprobaron todos los examenes,almenos uno y el ultimo examen*/
/*septiembre 6 de 2017*/
/*Realizado por: Jair Ramírez*/
#include <stdio.h>

int main()
{
	int i;
	
	float fNotaUno;
	float fNotaDos;
	float fNotaTres;
	int dNumeroAlumnos;
	
	printf("ingrese numero de alumnos \n");
	scanf("%d",&dNumeroAlumnos);
	
	int dContador=0;
	int dSegundoContador=0;
	int dTercerContador=0;
	for(i=1;i<=dNumeroAlumnos;i++)
	{
		printf("alumno numero %d \n",i);
		printf("ingrese nota 1: \n");
		scanf("%f",&fNotaUno);
		
		printf("ingrese nota 2: \n");
		scanf("%f",&fNotaDos);
		
		printf("ingrese nota 3: \n");
		scanf("%f",&fNotaTres);
		if(fNotaUno>=3 && fNotaDos>=3 && fNotaTres>=3)
		{
			dContador++;
		}
		printf("\n");
		if(fNotaUno>=3 || fNotaDos>=3 || fNotaTres>=3)
		{
			dSegundoContador++;
		}
		printf("\n");
		if(fNotaTres>=3)
		{
			dTercerContador++;
		}
	}
	
	printf("los estudiantes que aprobaron todos los examenes son: %d \n",dContador);
	printf("los estudiantes que aprobaron  almenos un  examen son: %d \n",dSegundoContador);
	printf("los estudiantes que aprobaron  el ultimo examen son: %d \n",dTercerContador);
	return 0;
}

