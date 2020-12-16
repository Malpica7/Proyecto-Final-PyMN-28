//Escriba un programa usando un ciclo “do while” en el cual se envíe un mensaje de error si el
//usuario no ingresa un número de 4 cifras con dígitos no repetidos. A la salida imprimirá el
//mensaje “código no válido”. En caso contrario imprimirá el mensaje “código válido”.
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

