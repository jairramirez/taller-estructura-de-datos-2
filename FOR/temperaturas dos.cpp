/*programa que lee temperaturas y devuel la mas alta, mas baja y promedio*/
/*septiembre 3 de 2017*/
/*relizado por jair ramírez*/
#include <stdio.h>

int main()
{
	float fTemperatura;
	float fBaja;
	float fAlta;
	float fPromedio;
	float i;
	float fSuma=0;
	int dCuentaTemperatura=0;
	printf("ingrese las  temperaturas \n");
	for(i=1;i<=6;i++)
	{
		scanf("%f",&fTemperatura);
		
		fSuma=fSuma+fTemperatura;
		dCuentaTemperatura++;
		if(fTemperatura==1)
		{
			fAlta=fTemperatura;
		}
		if(fTemperatura>fAlta)
		{
			fAlta=fTemperatura;
		}
		if(fTemperatura==1)
		{
			fBaja=fTemperatura;
		}
		if(fTemperatura<fBaja)
		{
			fBaja=fTemperatura;
		}
	}
	fPromedio=fSuma/dCuentaTemperatura;
	printf("la temperatura mas alta es %f \n: ",fAlta);
	printf("la temperatura mas abaja es %f \n: ",fBaja);
	printf("el promedio es %f \n: ",fPromedio);
	return 0;
}

