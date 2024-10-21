#include <stdio.h>
#include <ctype.h>
#include <string.h>
main()
{
	
	char vocales[8];
	int AC=0;
	int i=0;
	int AC1=0;
	int AC2=0;
	int AC3=0;
	int AC4=0;
	
	printf("Introduce una cadena de caracteres ");
	
	gets(vocales);
	
	for(i=0;i<=8;i++)
	{
		
		if((vocales[i]==97) || (vocales[i]==65)) 
		AC=AC+1;
		
		if((vocales[i]==101) || (vocales[i]==69)) 
		AC1=AC1+1;
		
		if((vocales[i]==105) || (vocales[i]==73)) 
		AC2=AC2+1;
		
		if((vocales[i]==111) || (vocales[i]==79)) 
		AC3=AC3+1;
		
		if((vocales[i]==117) || (vocales[i]==85)) 
		AC4=AC4+1;
	}
	
	printf("Esta es la a: %d\n", AC);
	printf("Esta es la e: %d\n", AC1);
	printf("Esta es la i: %d\n", AC2);
	printf("Esta es la o: %d\n", AC3);
	printf("Esta es la u: %d\n", AC4);
	
}
