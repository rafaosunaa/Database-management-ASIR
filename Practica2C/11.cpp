#include<stdio.h>

main()
{
 int a=0;
 int b=0;
 int resultado=0;
 char operador;
 puts( "caracter: ");
 scanf("%c",&operador);
 puts("primer numero: ");
 scanf("%d",&a);
 puts("segundo numero: ");
 scanf("%d",&b);
 if(operador=='+')
  resultado=a+b;
 else
   if(operador=='-')
     resultado=a-b;
 else
     if(operador=='*')
      resultado=a*b;
  else
      if(operador=='/')
      resultado=a/b;
  else
     if(operador=='%')
     resultado=a%b;
  else
  printf("Error");
 
           printf(" La respuesta es: %d",resultado);

}

