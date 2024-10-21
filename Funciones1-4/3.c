#include <stdio.h>
int identificador(int n);
main()
{
	int n=0;
	printf ("\n Introduce un numero:");
	scanf ("\n %d", &n);
	printf ("\n El resultado es: %d", identificador(n));
}
int identificador(int n){
	int resultado=0;
	if(n%2==0)
		resultado=0;
	else
		resultado=1;
	return resultado;
}
