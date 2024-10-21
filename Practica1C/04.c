#include <stdio.h>

int main ()
	{ 

int num=0;
int num2=0;
int num3=0;

	printf("Introduce un numero: ");
	scanf("%d",&num);
	printf("Introduce un numero: ");
	scanf("%d",&num2);
	printf("Introduce un numero: ");
	scanf("%d",&num3);

if ((num>num2) && (num>num3))
	printf("El numero %d es el mayor \n ",num);

	else if (num2>num3) 
		printf("El numero %d es el mayor \n ",num2);
		else
		printf("El numero %d es el mayor \n ",num3);
	
return 0;

}
