#include <stdio.h>
main()
{
	int Bd=0;
 int BD[10][10];
 int f,c;
 for(f=1;f<=10;f++)
 for(c=1;c<=10;c++)
 {
 	 scanf("%d",&Bd);
 }
 for(f=1;f<=10;f++)
 for(c=1;c<=10;c++)
{

  if(f%2==0)
 {
 	BD[f][c]=1; 
 }
 else
 {
 	BD[f][c]=0;
 }
 }

 for(f=1;f<=10;f++)
 for(c=1;c<=10;c++)
 {
 	printf("La matriz BD(f,c) es:%d\n");
 }
}
