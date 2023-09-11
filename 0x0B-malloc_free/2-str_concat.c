#include"main.h"
#include<stdlib.h>
/**
 * str_concat - func
 * @s1: arr1
 * @s2: arr2
 * Return: arr
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0, size, k, x = 0;

	char *a = NULL;

	while (s1[i] != '\0')
	{
		if (s1[i])
			i++;
		else
			break;
	}
	if (s1 == 0 || i == 0)
		return ('\0');
	while (s2[j] != '\0')
	{
		if (s2[j])
			j++;
		else
			break;
	}
	size = i + j;
	a = (char *)malloc(size * (char)+1);
	for (k = 0; k < size; k++)
	{
		if (k < i)
			a[k] = s1[k];
		else
		{
			a[k] = s2[x];
			x++;
		}
	}
	return (a);
}
