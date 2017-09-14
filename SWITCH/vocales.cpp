/*programa que determina si el caracter ingresado es una vocal */
/*septiembre 6 de 2017*/
/*relizado por jair ramírez*/
#include <stdio.h>

int main()
{
	char cLetra;
	
	printf("ingrese una letra \n");
	scanf("%c",&cLetra);
	switch(cLetra)
	{
	case 'a':
	case 'e':	
	case 'i':
	case 'o':
	case 'u':
		printf("es una vocal minuscula \n");
		break;
	default:
		printf("es una consonante /n");
		
	}
	
	return 0;
}

