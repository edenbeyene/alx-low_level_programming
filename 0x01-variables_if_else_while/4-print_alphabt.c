#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	
	char l;
      
   
	for (l = 'a'; l <= 'z'; l++)
	{
		if(l=='q' ||  l=='e'){
			continue ;
	}
	

		putchar(l);
	}
	

	
 	putchar( '\n' );
                	
                    
	return (0);
}
