/*programa que determina si el caracter ingresado es una vocal mayuscula o minuscula*/
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
		
	case 'A':
	case 'E':	
	case 'I':
	case 'O':
	case 'U':
		printf("es una vocal machuscula \n");
		break;
	default:
		printf("no es una vocal");	
	}
	
	return 0;
}

