#include <stdio.h>

int main ()
{
	
	int a,n,t1,t2,t3,t4;
	printf("Si es soltero presione 1 \nsi es casado presione 2 \n");
	scanf ("%d",&a);
	t1=8000;	
	t2=3200;
	t3=16000;
	t4=6400;
	switch (a)
	{
		case 1:printf("Ingrese la cantidad ya sea menor a 32000 o mayor a 32000 ");
		scanf ("%d",&n);
		
		if(n>32000)
		{
			
			printf("La tarifa final es de %d",t1);
		}
		else
		
		
		    printf("\nLa tarifa final es de %d",t2);
		break;
		
		
		case 2:printf("Ingrese la cantidad ya sea menor a 64000 o mayor a 64000 ");
		scanf ("%d",&n);
		
		if(n>64000)
		{
			
			printf("La tarifa final es de %d",t3);
		}
		else
		
		
		    printf("\nLa tarifa final es de %d",t4);
		
		break;
	}
	
	
}
