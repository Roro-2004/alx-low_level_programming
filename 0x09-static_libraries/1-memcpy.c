#include"main.h"
/**
 * _memcpy - func
 * @dest: par 1
 * @src: par 2
 * @n: size
 * Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
