#include <stdio.h>
#include <ctype.h>
#include <string.h>

main()
{
	
	char cara[6];
	char cruz[7];
	int a=0;
	

	puts ("Introduce una cadena  ");
	gets (cara);
	
	puts ("Introduce otra cadena  ");
	gets (cruz);
	
	a=strcmp(cara,cruz);
	
	if (a==0)
	printf ("Las dos cadenas son iguales\n");
	
	else
	
	printf ("Las dos cadenas son diferentess\n");
	
	

	
}

