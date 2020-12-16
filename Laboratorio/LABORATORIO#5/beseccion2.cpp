#include <stdio.h>
#include <math.h>
#define RAIZ(x) (log(abs(x)) + pow((x),2)-4)

int main() 
{
float i, xi, a, b, e, t;
int iteraciones;


printf("Dame el limite por la derecha: ");
scanf("%f", &i);


printf("\nDame el limite por la izquierda: ");
scanf("%f", &xi);
 
iteraciones = 0;
b = 0.0;
e = 0;

printf("%12s %10s %10s %10s %10s\n", "\nIteraciones", "i", "xi", "a", "b");
 
 
do{
iteraciones++;
a = (i + xi) / 2;
if(iteraciones >= 2) 
{
e = ((a - b) / a) * 100; 
}

e = fabs(e); 
printf("%12d %10f %10f %10f %10f\n", iteraciones, i, xi, a, fabs(e));
b = a;
if(RAIZ(a) > 0) 

{
i = a;
} 

else

{
xi = a;
}
 
 
}while(e > 0.5 || (e == 0.0 && iteraciones == 1));
 
 
 

 
 
printf("\nLa raiz de la funcion es: %f\n",a );
 

}

