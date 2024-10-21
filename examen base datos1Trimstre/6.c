
#include <stdio.h>
					
	
main()

{
	
	char cadena[20];
	int i=0;
	
	puts("Introducir cadena");
	gets(cadena);
	
	for (i=0;i<19;i++){
		if (cadena[i]==32){
			printf ("\n");
		}
		else 	
		printf ("%c",cadena[i]);
	
	}


	
}
