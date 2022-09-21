#include "main.h"

/**
 *_strncpy - Write a function that copies a string
 *@dest: an input string
 *@src: an input string
 *@n: an input integer
 *Return: A pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0' ; index++)
	{
		dest[index] = src[index];
	}
	for (; index  < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
