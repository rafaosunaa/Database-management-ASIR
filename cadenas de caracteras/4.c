#include <stdio.h>
#include <ctype.h>
#include <string.h>
main()
{
	char cadena[15];
	int i=0;
	
	printf("Introduce una cadena\n");
	
	gets(cadena);
	
	for(i=0;i<15;i++)
	{
	
		if(cadena[i]!=32)
		{
		printf("%c", cadena[i]);
		}
		else 
		cadena[i]=cadena[i+1];
	
		}
	
	printf ("\n\nLa cadena sin espacios en blanco es:\n\n %s", cadena);
}