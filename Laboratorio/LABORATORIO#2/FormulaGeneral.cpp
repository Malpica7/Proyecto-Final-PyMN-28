#include<stdio.h>
#include<math.h>
int main ()
{
float a, b , c, x1, x2;
printf("Ingrese el valor cuadratico ");
scanf("%f", &a);
printf("Ingrese el valor lineal ");
scanf("%f", &b);
printf("Ingrese el valor de la constante ");
scanf("%f", &c);
if ((sqrt(pow(b,2) - (4*a*c )) ) > 0)
{
x1=  (-b + (sqrt(pow(b,2) - (4*a*c )) ))/ (2*a);
x2=  (-b - (sqrt(pow(b,2) - (4*a*c )) ))/ (2*a);
printf("El valor de x1 es %f\n ", x1);
printf("El valor de x2 es %f\n ", x2);
}
else {
	printf("Las soluciones no son reales ");
}
return 0;
}
