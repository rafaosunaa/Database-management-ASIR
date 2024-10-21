#include <stdio.h>

int main ()
	{ 

int num=0;
int suma=0;
int producto=0;
int i=0;


for ( i=1; i<=30; i++ ){
	printf("Introduce un numero: ");
	scanf("%d",&num);
producto=i*num;
suma=i+num;
printf("%d*%d=%d \n ",num,i,producto);
printf("%d+%d=%d \n ",num,i,suma);}
}
