#include<stdio.h>

main(){


 int v[10];
 int c=0;
 int i=0;
 int cuad=0;
 int cubo=0;
 
 for(i=1;i<=10;i++){

 puts("introduce los valores del vector");
 scanf ("%d",&v[i]);}
 for(i=1;i<=10;i++){
 

 cuad=v[i]*v[i];
 cubo=v[i]*v[i]*v[i];
 
 printf("El cuadrado es %d\n",cuad);
 printf("El cubo es %d\n",cubo);
}
}
