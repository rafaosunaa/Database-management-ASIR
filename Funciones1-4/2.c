#include<stdio.h>
int media(int n, int z, int x);
main()
{
	int n=0;
	int z=0;
	int x=0;
	printf ("\n Introduce un numero:");
	scanf ("\n %d", &n);
	printf ("\n Introduce un numero:");
	scanf ("\n %d", &z);
	printf ("\n Introduce un numero:");
	scanf ("\n %d", &x);
	printf("\n La media de (%d,%d,%d) es: %d", n, z, x, media(n,z,x));
}
int media(int n, int z, int x){
	int suma=0;
	int resultado=0;
	suma=n+x+z;
	resultado=suma/3;
	return resultado;
}
