 #include <stdio.h>
main ()
{ 
int n=0;
int c=0;
int suma=0;
int producto=1;
int i=0;
for( i=1; i<=5; i++ )
{
scanf("%d",&n); 
producto=producto*n;
suma=suma+n;
}
printf(" el producto es %d",producto);
printf("la suma es %d",suma);
}
