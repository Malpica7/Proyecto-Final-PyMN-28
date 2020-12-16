#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
float funcion1(float x), derivada(float x), errorporcentual(float x, float y);


int main()
{
	int i;
	float a, b, xi, t, raiz, error,xi2,e;
	
    printf(" Ingresa el valor\n");
	scanf("%f",&xi);
	printf(" Ingresa el margen de error o tolerancia ");
	scanf("%f",&t);
	
	raiz=0;
	i=0;
		
	do{
		a=funcion1(xi);
      	b=derivada(xi);
      		


	raiz=xi-(a/b);	
		e=errorporcentual(raiz, xi2);
		
		if(e>t){
			xi=raiz;
			xi2=xi;	
		}
		
			i++;
		
		printf(" iteracion %d  %f\n",i,raiz);
	}while(e>t);
	
	printf(" la raiz aproximada es %f",raiz);	
return 0;	
}



float funcion1(float x){
	
	return exp(-x)-x;
	
}


float derivada(float x){
	
	return -exp(-x)-1;

}
float errorporcentual ( float x, float y){
	
	
	return fabs ((x-y)/x)*100;
}

