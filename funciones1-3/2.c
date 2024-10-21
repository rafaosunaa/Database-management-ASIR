#include <stdio.h>
int par (int *pvector, int n);
int impar (int *pvector, int n);
main()
{
	int vector[30];
	int c=0;
	int n;
	for (c=0;c<=29;c++)
	{
		printf("\n Introduce un numero:  ");
		scanf("%d", &vector[c]);
	}
	for (c=0;c<=29;c++)
	{
		printf ("\n La posicion (%d) es: %d", c, vector[c]);
	}
	printf("\n La suma de los numeros de las posiciones pares es: %d", par(vector, 30));
	printf("\n La suma de los numeros de las posiciones impares es: %d", impar(vector, 30));
}
int par (int *pvector, int n){
	int c=0;
	int contador=0;
	4
	
	for (c=0;c<=29;c++)
	{
		if (c%2==0)
		{
			contador=*(pvector+c)+contador;
		}
	}
	return contador;
}
int impar (int *pvector, int n){
	int c=0;
	int contador1=0;
	for (c=0;c<=29;c++)
	{
		if (c%2!=0)
		{
			contador1=contador1+*(pvector+c);
		}
	}
	return contador1;
}
