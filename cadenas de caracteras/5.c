#include <stdio.h>
#include <ctype.h>
#include <string.h>
main()
{
	
	char cadena[10];	
	int i=0;
	puts("Introduce una cadena  ");
	gets (cadena);
	
	for(i=0;i<10;i++)
	{
		
		cadena[i]=toupper(cadena[i]);
	}	
	
	for (i=0;i<10;i++){
	
		printf("%c", cadena[i]);
	}
	
}