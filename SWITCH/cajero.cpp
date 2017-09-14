/*Programa que simula un cajero automatico,permitiendo retirar e ingersar dinero y mustra saldo si lo hay*/
/*septiembre 6 de 2017*/
/*Realizado por: Jair Ramírez*/
#include <stdio.h>

int main() 
{
	int dSaldo;
	int dRetirar;
	int dConsignar;
	int dOpcion;
	int dNuevoSaldo;
	dSaldo=1000000;
	printf("Buenos dias, digite una  opcion \n");
	
	while(dOpcion!=4)
	{
		printf(">>>>>>>>>>MENU<<<<<<<<<<< \n");
		printf("1. consulta de saldo \n");
		printf("2.Retiro de efectivo\n");
		printf("3.Consignar efectivo \n");
		printf("4.Salir \n");
		scanf("%d",&dOpcion);
		
		switch(dOpcion)
		{
		case 1: printf("Su saldo es: %d \n ",dSaldo);
		break;
		case 2: printf("Ingrese cantidad a retirar \n");
		scanf("%d",&dRetirar);
		if(dRetirar<=dSaldo)
		{
			dSaldo=dSaldo-dRetirar;
			
			printf("su nuevo saldo es: %d \n",dSaldo);
		}else{
			printf("Fondos insuficientes  \n");
		}
		
		break;
		
		case 3: printf("Ingrese cantidad a consignar \n");
		scanf("%d",&dConsignar);
		
		dSaldo=dSaldo+dConsignar;
		printf("su nuevo saldo es: %d \n",dSaldo);
		break;
		
		case 4: break;
		}
		
		
	}
	
	
	return 0;
}

