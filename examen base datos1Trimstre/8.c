#include<stdio.h>
#include<string.h>

main()
{
 char palabra[80];
 int x,y,z;
   printf("\t Programa que determina si una palabra es palindromo");
   printf("\n\nEscribe una palabra: ");
   scanf(" %s",palabra);
   x=strlen(palabra);
   x=x-1;
 for(y=0,z=x;y<=x/2;y++,z--){
          if(palabra[y]==palabra[z])
             printf("Es palindromo\n");
 else
                printf("No es palindromo\n");


}
printf ("\n\n");
}
