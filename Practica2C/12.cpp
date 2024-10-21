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
 switch (operador)
 {
   case '+':
       printf("resultado %d",a+b);
       break;
   case '-':
       printf("resultado %d",a-b);
       break;
   case '*':
       printf("resultado %d",a*b);
       break;
   case '%':
       printf("resultado %d",a/b);
       break;
   default:
       printf("error");
   }
}

