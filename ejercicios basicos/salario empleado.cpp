/*programa que calcula el salario de un empleado*/
/*septiembre 1 de 2017*/
/*Realizado por: Jair Ramírez*/
#include <stdio.h>

int main() 
{
	float horasDiurnas= 2500;
	float numeroHorasDiurnas;
	float numeroHorasNocturnas;
	float numeroHorasDominicales;
	float numeroHorasFestivos;
	float totalHorasDiurnas;
	float totalHorasNocturnas;
	float totalHorasDominicales;
	float totalHorasFestivos;
	float totalSalario;
	printf("ingrese numero de horas diurnas \n");
	scanf("%f",&numeroHorasDiurnas);
	printf("ingrese numero de horas nocturnas \n");
	scanf("%f",&numeroHorasNocturnas);
	printf("ingrese numero de horas dominicales \n ");
	scanf("%f",&numeroHorasDominicales);
	printf("ingrese numero de horas festivas \n ");
	scanf("%f",&numeroHorasFestivos);
	totalHorasDiurnas=horasDiurnas*numeroHorasDiurnas;
	totalHorasNocturnas=numeroHorasNocturnas*(horasDiurnas+(horasDiurnas*35/100));
	totalHorasDominicales=numeroHorasDominicales*(horasDiurnas+(horasDiurnas*50/100));
	totalHorasFestivos=numeroHorasFestivos*(horasDiurnas+(horasDiurnas*75/100));
	totalSalario=totalHorasDiurnas+totalHorasNocturnas+totalHorasDominicales+totalHorasFestivos;
	printf("valor hora diurna %f \n",horasDiurnas);
	printf("valor horas diurnas = %f * %f =%f \n ",horasDiurnas,numeroHorasDiurnas,totalHorasDiurnas);
	printf("valor horas nocturnas = (%f + 35%)*%f = %f \n ",horasDiurnas,numeroHorasNocturnas,totalHorasNocturnas);	
	printf("valor horas dominicales = (%f + 50%)* %f =%f \n ",horasDiurnas,numeroHorasDominicales,totalHorasDominicales);
	printf("valor horas festivos = (%f + 75%) * %f = %f \n ",horasDiurnas,numeroHorasFestivos,totalHorasFestivos);
	printf("total salario es= %f ",totalSalario);
	return 0;
}

