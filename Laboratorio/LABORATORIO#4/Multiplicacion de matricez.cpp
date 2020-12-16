#include <stdio.h>

main()
{
	int A[10][10],B[10][10],C[10][10]; 
    int i,j,f,c;

    printf("Dame el tamano de las matrices y que no pase de 10 las filas y comlumnas "); 
    printf("\nFilas: "); 
	scanf("%d", &f);
    printf("Columnas: "); 
	scanf("%d", &c);
	
   
    
    printf("Dame los datos de la Matriz 1:\n");
    
    for(i=1;i<=f;i++)
    
    {
        for(j=1;j<=c;j++)
        {
            printf("\n(%i,%i): ",i,j); 
			scanf("%d", &A[i][j]);
        }
    }
   
    printf("\nDame los datos de la Matriz 2:\n");
    
    for(i=1;i<=f;i++)
    
    {
        for(j=1;j<=c;j++)
        {
            printf("\n(%i,%i): ",i,j); 
			scanf("%d", &B[i][j]);
        }
    }
    
   
    for(i=1;i<=f;i++)
    
    {
        for(j=1;j<=c;j++) 
        
		C[i][j]=A[i][j]*B[i][j]; 
    }
   
   
    printf("\n\nLa multiplicacion de las matricez es:\n\n");
    
    for(i=1;i<=f;i++)
    
    {
        for(j=1;j<=c;j++) 
        
		printf("%d ",C[i][j]);
		
        printf("\n");
    }
    
}
