#include <stdio.h>
#include <ctype.h>
#include <string.h>
main()
{
	
	char palabra[10];
	int i=0;
	int j=0;
	int longitud=0;
	int aux=0;
	
	printf("Escribir una palabra\n");
	
	scanf ("%s", palabra);
	
	longitud=strlen(palabra);
	
		for(i=0;i<=longitud;i++)
	{
		
		for(j=0;j<=longitud-i;j++)
		{
			
			
			if(palabra[j]>palabra[j+1])
		{
		

		aux=palabra[j];
		palabra[j]=palabra[j+1];
		palabra[j+1]=aux;
	}
	}

}
	
	
		for(i=0;i<=longitud;i++)
		printf("%c\n", palabra[i+1]);	
}