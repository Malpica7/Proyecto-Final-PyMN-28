//Escriba un programa que obtenga los d�gitos binarios de un n�mero decimal por medio del
//c�lculo de residuos. Por ejemplo, si la entrada es el n�mero 5 se imprimir� la secuencia
#include<stdio.h>

main()
{
      int binario[100], n,x,y;
      printf("dame un numero: \n");
      scanf("%d",&n);
      x=0;
      y=0;
      for(x=100;x>0;x--)
      {
           binario[x]=x%2;
           n=n/2;
      }
      for(x=1;x<=100;x++)
      {
           if(binario[x]==1)
           {
                for(y=x;y<=100;y++)
                {
                     printf("%d",binario[y]);
                }
                break;
           }
      }
}



