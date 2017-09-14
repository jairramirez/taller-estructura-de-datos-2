/*programa que cambia un numero entero a romano en el mismo valor*/
/*septiembre 6 de 2017*/
/*realizado por Jair Ramirez*/
#include <stdio.h>

int main()
{
	int dNumero;
	
	printf("ingrese un numero del 1 al 10\n");
	scanf("%d",&dNumero);
	switch(dNumero)
	{
	case  1: printf("el numero en romano es I");
	break;
	case  2: printf("el numero en romano  es II");
	break;
	case  3: printf("el numero en romano  es III");
	break;
	case  4: printf("el numero en romano  es IV");
	break;
	case  5: printf("el numero en romano  es V");
	break;
	case  6: printf("el numero en romano es VI");
	break;
	case  7: printf("el numero en romano es VII");
	break;
	case  8: printf("el numero en romano es VIII");
	break;
	case  9: printf("el numero en romano es IX");
	break;
	case 10: printf("el numero en romano es X");
	break;
	
	default:
		printf("El numero no esta en el rango solicitado");
	}
	
	
	return 0;
}

