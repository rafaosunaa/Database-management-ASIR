#include <stdio.h>

main ()
	{ 
int Media=0;
int num=0;
int c=0;
int suma=0;

puts ("Introduce un numero");
scanf ("%d", &num);
while (num !=999){
	suma=suma+num;
	c=c+1;
	puts ("Introduce un numero");
	scanf ("%d", &num);
}
Media=suma/c;
printf ("la media aritmetica es %d", Media);
}


