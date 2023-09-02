#include"main.h"
/**
 * _strcat - a func
 * @dest: arr1
 * @src: arr2
 * Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int size = 0, j = 0, i = 0, k, x = 0;

	while (dest[i] != '\0')
	{
		if (dest[i])
			i++;
		else
			break;
	}
	while (src[j] != '\0')
	{
		if (src[j])
			j++;
		else
			break;
	}
	size = i + j;
	for (k = i; k <= size; k++)
	{
		if (k != size)
		{
		dest[k] = src[x];
		x++;
		}
		else
			dest[size] = '\0';
	}
	return (dest);
}
