#include"main.h"
/**
 * _strcpy - func
 * @dest: arr
 * @src: arr
 * Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
