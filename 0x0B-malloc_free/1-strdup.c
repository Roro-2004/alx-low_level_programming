#include"main.h"
#include<stdlib.h>
/**
 * _strdup - func
 * @str: char
 * Return: ptr
*/
char *_strdup(char *str)
{
	char *ptr = NULL;

	unsigned int i = 0, j;

	while (str[i] != '\0')
	{
		if (str[i])
			i++;
		else
			break;
	}
	ptr = (char *)malloc(i * sizeof(char));
	if (ptr == 0)
		return ('\0');
	if (i > 0)
	{
		for (j = 0; j < i; j++)
			ptr[j] = str[j];
	}
	return (ptr);
}
