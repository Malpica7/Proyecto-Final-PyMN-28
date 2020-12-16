#include<stdio.h>
#include<time.h>
#include<stdlib.h>

main ()
{
	int A[3],B[3],C[3],D[3];
	int i,j,k,l,w,x,y,z; 
	
	
	for(i=0 ; i<3; i++)
	
	{
	srand(time(NULL));
	
	w=rand();
	w=A[i];
	
    printf("%d    ",A[i]);
    printf(" ");
    
    }
    
    
    
    printf("\n");
    
    
    
    for(j=0 ; j<3; j++)
    
	{
	srand(time(NULL));
	
	x=rand();
	x=B[j];
	
    printf("%d    ",B[j]);
    printf(" ");
    }
    
    
    
    printf("\n");
    
    
    
    for(k=0 ; k<3; k++)
    
	{
	srand(time(NULL));
	
	y=rand();
	y=C[k];
	
    printf("%d    ",C[k]);
    printf(" ");
    }
    
    
    
    printf("\n");
    
    
    
    for(l=0 ; l<3; l++)
    
	{
	srand(time(NULL));
	
	z=rand();
	z=D[l];
	
    printf("%d    ",D[l]);
    printf(" ");
    }
  
}
