//Escriba un programa usando un ciclo �do while� en el cual se env�e un mensaje de error si el
//usuario no ingresa un n�mero de 4 cifras con d�gitos no repetidos. A la salida imprimir� el
//mensaje �c�digo no v�lido�. En caso contrario imprimir� el mensaje �c�digo v�lido�.
#include<iostream>
#include<math.h>



main()
{

int x,y;


y=1234;
	do {
	printf("Ingrese el codigo ");
	scanf("%d", &x);
	if (x==y)
	{
		printf("Codigo valido ");
	}
    else
	{
	    printf("Codigo invalido\n ");
    }
    }while(x!=y);

}

