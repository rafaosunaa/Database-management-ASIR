#include <stdio.h>

main ()
	{ 
int i=0;
int suma=0;

for(i=2;i<=30;i+=3)
if (i%5==0)
suma=suma+i;

printf("El resultado es %d\n", suma);

}
