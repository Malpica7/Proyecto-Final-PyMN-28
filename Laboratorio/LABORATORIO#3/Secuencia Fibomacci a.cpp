//La secuencia de números de Fibonacci 
#include <stdio.h>

main()
{
int n, i, x, y, z;
 
printf("Dame el numero: ");
scanf("%d", & n);
i=2;
x=1;
y=1;
z=0;

   if (n == 0)
    {
       printf("La serie del numero %d es: 0 \n", n);
    }
        if (n ==1)
    {
       printf("La serie del numero %d es: 1 \n", n);
    }
        if (n == 2)
    {
       printf("La serie del numero %d es: 1 1 \n", n);
    }
    if (n >=3)
    {
 
    printf("%d %d ", x,y);
       do
       {
        z=x+y;
        x=y;
        y=z;
            printf("%d \n", z);
			i= i+1;
 
       }while(n > i);
    }
 
}
