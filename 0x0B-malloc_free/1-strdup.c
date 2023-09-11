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

	if (str == 0)
		return ('\0');
	while (str[i] != '\0')
	{
		if (str[i])
			i++;
		else
			break;
	}
	ptr = (char *)malloc(i * sizeof(char) + 1);
	if (ptr == 0)
	{
		return ('\0');
	}

		for (j = 0; j < i; j++)
			ptr[j] = str[j];
	return (ptr);
}
