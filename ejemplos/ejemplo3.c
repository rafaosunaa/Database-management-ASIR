#include <stdio.h>
	main ( )
	{
  		int c = 0;
		while (getchar ( ) != '\n' )
			c ++;
		printf("La línea tiene %d caracteres.\n", c);
	}

