#include<stdio.h>
#include<math.h>
#include<string.h>
main ()
{
	
	float p, e, estatura, IMC;

    printf ("dame la estatura ");
	scanf("%f", & e);
	
	printf ("dame el peso ");
	scanf("%f", & p);
	
	estatura=(e)*(e);
	
	IMC=(p)/(estatura);
	
	if(IMC<18.5)
	{
	printf ("Usted tiene peso bajo ", IMC);	
	}
	
	else
	
	if
	(24.9<IMC>18.5)
	{
	printf ("Usted tiene peso normal ", IMC);
	}
	
	else
	
	if (29.9<IMC>25.0)
	{
	printf ("Usted tiene sobrepeso ", IMC);
	}
	
	else
	
	if(34.5<IMC>30.0)
	{
	printf ("Usted tiene obesidad tipo 1 ", IMC);
	}
	
	else
	
	if(39.9<IMC>35.0)
	{
	printf ("Usted tiene obesidad tipo 2 ", IMC);
	}
	
	else
	
	if(IMC>40.0)
	{
	printf ("Usted tiene hiper obesidad ", IMC);
	}
}
