#include"main.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * create_array - func
 * @size: array size
 * @c: char
 * Return: arr
*/
char *create_array(unsigned int size, char c)
{
	char *arr = NULL;
	unsigned int i;

	arr = (char *)malloc(size * sizeof(char));

	if (arr == 0 || size == 0)
		return ('\0');
	if (size > 0)
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
