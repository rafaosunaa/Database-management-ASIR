#include <stdio.h>
main ( ) 
{
 	int edad, fecha_act=0;
	char nombre[20];
	puts("introduce tu edad: ");
	scanf( "%d", &edad);
	puts ("introduce el año actual");
	scanf("%d", &fecha_act);
	puts("introduce tu nombre");
	scanf ("%s", nombre);
	printf("%s, naciste en %d\n", nombre, fecha_act-edad);
}
