#include<stdio.h>
#include<math.h>
#include<string.h>
main ()
{
	char x[30];
	int edad;
	float peso, estatura, e, nombre, IMC;
	printf ("dame el nombre ");
	scanf("%s", & x);
	printf ("dame la edad ");
	scanf("%d", & edad);
	printf ("dame la estatura ");
	scanf("%f", & e);
	printf ("dame el peso ");
	scanf("%f", & peso);
	estatura=(e)*(e);
	IMC=(peso)/(estatura);
	printf("La persona de nombre  %s", x);
	printf(" de edad de %d", edad);
	printf(" tiene una masa muscular de %f", IMC);
	}
