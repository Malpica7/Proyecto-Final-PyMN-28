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
	
   printf("Dame los datos de la Matriz :\n");
    
    for(i=1;i<=f;i++)
    
    {
        for(j=1;j<=c;j++)
        {
            printf("\n(%i,%i): ",i,j); 
			scanf("%d", &A[i][j]);
        }
    }
    
    printf("\n\nLa matriz es:\n\n");
    
    for(i=1;i<=f;i++)
    
    {
        for(j=1;j<=c;j++) 
        
		printf("%d ",A[i][j]);
		
        printf("\n");
   	}
   	
}
