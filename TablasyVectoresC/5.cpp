#include <stdio.h>
main()
{
int i;
int media=0;
int notas[40];
int suma=0;
puts("Introduce 40 numeros:");
for(i=1;i<=40;i++)
	{
	scanf("%d",&notas[40]);
	suma=suma+notas[40];
	}
printf("La suma es:%d",suma);
media=media/40;
printf("La media es:%d",media);	
}
