#include "main.h"

/**
 *_strncat - a function that concatenates two strings. 
 *@dest: This is the output  dest
 *@src: This is the input src
 *@n: This is the number bytes fro src
 *Return: This is my return
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
