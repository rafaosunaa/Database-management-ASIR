#include <stdio.h>
main()
{
int Sumafila=0;
int MediaF=0;
int MediaC=0;
int Tabla[5][4];
int Sumacolumna=0;
int f=0;
int c=0;

for(f=1;f<5;f++)
for(c=1;c<4;c++)
{
scanf("%d",&Tabla[f][c]);	
}
for(f=1;f<5;f++)
for(c=1;c<4;c++)
{
	Sumafila=Sumafila+Tabla[f][c];
}
MediaF=Sumafila/5;
printf("La media de las filas es:%d");
Sumafila=0;
for(f=1;f<5;f++)
for(c=1;c<
4;c++)
{
	Sumacolumna=Sumacolumna+Tabla[f][c];
	
}
MediaC=Sumacolumna/4;
printf("La media de la columna es:%d");
Sumacolumna=0;
}


	
	
	
	
	
	
	
	
	
	
	
