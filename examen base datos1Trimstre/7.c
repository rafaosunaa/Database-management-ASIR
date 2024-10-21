#include <stdio.h>
int factorial(int n);

main()
{
	int num;
	int m;
	
	puts ("Introducir valor entero y positivo\n");
	scanf ("%d",&num);
	
	m=factorial(num);
	printf ("El factorial es : %d",m);
}

	int factorial (int n){
		int fact=1;
		int i=1;
		for (i=1;i<n+1;i++){
			fact=fact*i;
		}
		return (fact);
	}


