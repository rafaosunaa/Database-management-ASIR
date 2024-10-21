#include<stdio.h>

main()
{int numero1=0;
	int numero2=0;
	int multiplicacion;
	int resta;
	int suma;
	scanf("%d",&numero1);
	scanf("%d",&numero2);
	if(numero1==numero2)
		multiplicacion=numero1*numero2;
		printf("El resultado de la multiplicacion es:%d",multiplicacion);
 else
   if(numero1>numero2)
     suma=numero1+numero2;
     printf("el resultado de la suma es:%d")
 else
     if(numero1<numero2)
      resta=numero2-numero1;
      printf("el resultado de la resta es:%d")
}


