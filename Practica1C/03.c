#include <stdio.h>

int main ()
	{ 

int num;
int num2;

	printf("Introduce un numero: ");
	scanf("%d",&num);
	printf("Introduce un numero: ");
	scanf("%d",&num2);

if (num>num2)

	printf("El numero %d es mayor que %d\n ",num,num2);
else
	printf("El numero %d es mayor que %d\n ",num2,num);

return 0;

}
