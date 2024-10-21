#include <stdio.h>
main()
{
	int diagonal [4][4];
	int f=0;
	int c=0;
	for (f=1;f<5;f++){
		for (c=1;c<5;c++){
		printf ("introducir valor en la fila %d columna %d\n",f,c);
		scanf ("%d",&diagonal[f][c]);
		}
	}
	for (f=1;f<5;f++){
		for (c=1;c<5;c++){
		if (f==c){
			diagonal [f][c]=1;	
		}
			
		}
	}
	printf("La tabla es :\n");
	for (f=1;f<5;f++){
		for (c=1;c<5;c++){
			printf ("%d\t",diagonal[f][c]);
		}
		printf ("\n");
	}
	
}
