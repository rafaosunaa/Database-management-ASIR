 #include <stdio.h>

main ()
{ 
int a=0;
int b=0;
puts("introduce el valor de a");
scanf("%d", &a);
puts("introduce el valor de b");
scanf("%d", &b);
if (a==b)
printf("%d y %d son iguales\n", a, b);
if (a>b)
printf("El numero %d es el mayor \n ",a);
else 
printf("El numero %d es el mayor \n ",b);
}  
