#include <stdio.h>
main()
{
int Suma=0;
int operacion=0;
int suma[4][4];
int f;
int c;
for(f=1;f<=4;f++)
for(c=1;c<=4;c++)
{
scanf("%d",&Suma);	
operacion=c+f;
suma[f][c]=operacion;
}
printf("La suma es:%d");
}
