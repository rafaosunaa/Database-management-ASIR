#include <stdio.h>
int suma(int vector1[][5], int n);
int par (int *pvector2, int n);
main ()
{
	int vector1[5][5];
	int vector2[10];
	int f;
	int c;
	int n;
	int program;
	int opcion;
	do{
	printf ("\n Si deseas continuar introduce un 1, sino cualquier otro valor:  ");
	scanf ("%d", &program);
	if (program==1)
		{
		puts ("\n Opcion (1): crear tabla 5x5 que realice la suma de su contenido");
		puts ("\n Opcion (2): crear vector 10x1 que realice la suma de las posiciones pares");
		puts ("\n Selecciona una opcion:");
		scanf("%d", &opcion);
			
			switch (opcion)
			{
			case 1 :
				for (f=0;f<=4;f++)
	{
			for (c=0;c<=4;c++)
						{
							5
					printf("\n Introduce un valor:  ");
				scanf("%d", &vector1[f][c]);
					}
					}
				printf ("\n La suma de todos los valores introducidos es: %d", suma(vector1, 5));
			break;
					
				case 2 :
					for (c=0;c<=9;c++)
				{
					printf("\n Introduce un valor:  ");
					scanf("%d", &vector2[c]);
					}
				printf("\n La suma de los numeros que se encuentran en las posiciones pares es: %d", par(vector2, 30));
				break;
					
				default:
					printf ("\n No se reconoce la opcion");
			}
		}
	}while (program==1);
}
int suma(int vector1[][5], int n){
	int c=0;
	int f=0;
	int contador=0;
	for (f=0;f<=4;f++)
	{
		for (c=0;c<=4;c++)
		{
		contador=contador+(vector1[f][c]);
		}
	}
	return contador;
}
int par (int *pvector2, int n){
	int c=0;
	int contador=0;
	for (c=0;c<=9;c++)
	{
		if (c%2==0)
		{
			contador=*(pvector2+c)+contador;
		}
	}
	return contador;
}
