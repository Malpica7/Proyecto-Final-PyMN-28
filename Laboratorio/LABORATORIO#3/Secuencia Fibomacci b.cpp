//Aproximar el n�mero �ureo ? = 1.61803 al dividir dos n�meros de la secuencia de
//Fibonacci (por ejemplo 5/8=1.6) para un n�mero N=5, N=20 y N=200 iteraciones.
#include<stdio.h>
int main ()
{
	float a, b=0, c=1, d=1, e, i;
	printf("Ingrese el numero ");
	scanf("%f", &a);
	for (i=1;i<a;i++)
	{
		d=b+c;
		b=c;
		c=d;
		e= c/b;
		printf("%f ",e);
	}
}
