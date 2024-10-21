#include <stdio.h>
main()
{
int numeros[50];
int n=0;
int i=0;
int v[50];
for (i=0;i<50;i++){
	puts("Introduce un valor:");
	scanf("%d",&n);
	while (n<1 && n>100){
	  puts("Introduce un valor:");
	  scanf("%d",&n);
	}
	numeros[i]=n;
}
for(i=0;i<50;i++){
	if(i%2==0){
		numeros[i]=numeros[i]*0;
		v[i]=numeros[i];
	}
	else{
		numeros[i]=numeros[i]-i;
		v[i]=numeros[i];
	}
	}
	printf("El vector es:\n");
	
	for(i=0;i<50;i++){
		printf("%d",v[i]);
	}
}

