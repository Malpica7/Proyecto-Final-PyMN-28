#include <stdio.h>
int main ()
{
	int a;
	printf ("Dame la edad ");
	scanf ("%d",&a);
	
	if(a>18)
	{
		printf("Es mayor de edad ");
	}
	else
		printf("El menor de edad ");
}
