#include"main.h"
/**
 * _strncpy - a func
 * @dest: array
 * @src: array
 * @n: range
 * Return: det
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[i] != '\0')
	{
		if (src[i])
			i++;
		else
			break;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for (; j < n; j++)
		dest[i] = '\0';
	return (dest);
}
