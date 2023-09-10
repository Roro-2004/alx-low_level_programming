#include"main.h"
/**
 * _memset - func
 * @s: array
 * @b: buffer
 * @n: size
 * Return: array
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (n--)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
