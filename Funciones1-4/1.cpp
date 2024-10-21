#include <stdio.h>
#include<stdlib.h>
int doble(int n1);
main()
{
	int n1,a;
	printf("leer numero");
	scanf("%d",&n1);
	a=doble(n1);
	printf("el doble del numero %d es %d es %d\n",n1,a);
	system("pause");
}
int doble(int n1)
{
	int result;
	result=n1*2;
	return(result);
}
