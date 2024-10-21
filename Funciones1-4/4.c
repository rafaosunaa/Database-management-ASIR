#include <stdio.h>
int perimetro (int n, int z);
int area (int n, int z, int x);
main()
{
	int n=0;
	int z=0;
	int x=0;
	int q=0;
	int p=0;
	int a=0;
	do
	{
	printf ("\n Si no quieres seguir con el programa introduce un (0), sino introduce cualquier numero:");
	scanf ("\n %d", &q);
	if (q!=0)
	{
	printf ("\n Escribe el numero de lados del poligono:");
	scanf ("\n %d", &n);
	printf ("\n Escribe la longitud de un lado:");
	scanf ("\n %d", &z);
	printf ("\n Escribe la apotema del poligono:");
	scanf ("\n %d", &x);
	p=perimetro(n,z);
	a=area(n,z,x);
	printf ("\n El perimetro es: %d", p);
	printf ("\n El area del poligno es : %d", a);
	}
	}while(q!=0);
}
int perimetro (int n, int z){
	int resultado1=0;
	resultado1=n*z;
	return resultado1;
}
int area (int n, int z, int x){
	int resultado2=0;
	resultado2=n*z*x;
	return resultado2;
}
