#include <stdio.h>
main( )
{
int Suma=0;
int Num=0;
scanf ("%d", &Num);
while (Num >= 0)
{
Suma=Suma+Num;
scanf ("%d", &Num);
}
printf("La suma es %d", Suma);
}
