#include <string.h>
#include "main.h"

/**
 * _strncpy - The func that  will copy with the strncpy()
 *
 * @dest: The pointer to buffer
 * @src: The pointer to source
 * @n: The number of bytes to copy
 * Return: The pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)                                                                  
{                                                                                                                
	int i;                                                                                                    
                                                                                                                            
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
                                                                                                                            
	return (dest);                                                                                                 
}
