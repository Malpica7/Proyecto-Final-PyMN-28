#include<stdio.h>
#include<math.h>
main ()
{
	float masa, gravitatoria, fuerza;
	printf ("dame el masa");
	scanf("%f", & masa);
	gravitatoria=(9.8);
	fuerza=(masa)*(gravitatoria);
	printf("La fuerza es %f", fuerza);
	}
