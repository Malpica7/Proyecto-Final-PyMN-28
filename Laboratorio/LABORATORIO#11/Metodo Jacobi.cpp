#include <stdio.h>
#include<math.h>
float A[3][3] = {{10,2,-1},{-3,-6,2},{1,1,5}}; 

float b[3] = {27,-61.5,-21.5}; 

float xinicial1,xinicial2,xinicial3,Ea1,Ea2,Ea3,x1old,x2old,x3old;

float xiteracion1,xiteracion2,xiteracion3; 

int i,j;

int main()
{
for(j=0;j<5;j++)
{
	
    if(j==0){ 
    
        xiteracion1 = b[0]/A[0][0];
        
        xiteracion2 = b[1]/A[1][1];
        
        xiteracion3 = b[2]/A[2][2];
        
        printf("Metodo Jacobi\n" );
        
        printf("x1 La iteracion 1 es %f\n",xiteracion1);
        
        printf("x2 La iteracion 1 es %f\n",xiteracion2);
        
        printf("x3 La iteracion 1 es %f\n",xiteracion3);
    }
    else {
        x1old = xiteracion1;
        xiteracion1 = ((-A[0][1]*xiteracion2)-(A[0][2]*xiteracion3)+b[0])/A[0][0];
        
        Ea1=fabs((xiteracion1-x1old)/(xiteracion1))*100;
        
        x2old = xiteracion2;
        
        xiteracion2 = ((-A[1][0]*x1old)-(A[1][2]*xiteracion3)+b[1])/A[1][1];
        
        Ea2=fabs((xiteracion2-x2old)/(xiteracion2))*100;
        
        x3old = xiteracion3;
        
        xiteracion3 = ((-A[2][0]*x1old)-(A[2][1]*x2old)+b[2])/A[2][2];
        Ea3=fabs((xiteracion3-x3old)/(xiteracion3))*100;
        
        printf("x1 La iteracion %d es %f con un error de %f %%\n",j+1,xiteracion1,Ea1);
        
        printf("x2 La teracion %d  es %f con un error de %f %%\n",j+1,xiteracion2,Ea2);
        
        printf("x3 La iteracion %d es %f con un error de %f %%\n",j+1,xiteracion3,Ea3);
        }
    }
}
