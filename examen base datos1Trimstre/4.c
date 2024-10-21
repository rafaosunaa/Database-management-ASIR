#include <stdio.h>


int main(){
	
	int numeros[10];
	int i=0;
	int j=0;
	int aux=0;
	
	for(i=1;i<=10;i++){
		
		printf("\nIntroduce elemento de posicion %i\t", i);
		scanf("%i", &numeros[i]);
		
	}
	
	
	printf("\nVector sin ordenar\n");
	
	for(i=1;i<=10;i++){
		
		printf("%i\t", numeros[i]);
		
	}
	printf("\n");

	for(i=1;i<=10;i++){
		for(j=1;j<=10;j++){
			
		if (numeros[i]<numeros[j]){
			
			aux=numeros[j];
			numeros[j]=numeros[i];
			numeros[i]=aux;
			
			
		}	
			
		}
		
	}
	
	
	printf("\nVector ordenado\n");
		for(i=1;i<=10;i++){
		
		printf("%i\t", numeros[i]);
		
	}
	
	

	return 0;
}
