#include <stdio.h>
int Suma(int *pvector, int n);
main()
{
	int vector[20];
	int c;
	int n;
	for (c=0;c<=19;c++)
	{
		printf("\n Introduce un numero:  ");
		scanf("%d", &vector[c]);
	}
	printf ("\n La suma de todos los numeros introducidoses: %d", Suma(vector, 20));
}
int Suma(int *pvector, int n){
	int c;
	int contador=0;
	for (c=0;c<=19;c++)
	{
		contador=contador+*(pvector+c);
	}
	return contador;
}
