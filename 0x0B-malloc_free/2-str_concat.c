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
	unsigned int i = 0, j = 0, k, x = 0;

	char *a = NULL;

	if (s1 == NULL)
	{
		s1 = "\0";
	}
	if (s2 == NULL)
	{
		s2 = "\0";
	}
	while (s1[i] != '\0')
	{
		if (s1[i])
			i++;
		else
			break; }
	while (s2[j] != '\0')
	{
		if (s2[j])
			j++;
		else
			break; }
	a = (char *)malloc((i + j) * (char)+1);
	if (a == 0)
	{
		return ('\0');
	}
	for (k = 0; k < (i + j); k++)
	{
		if (k < i)
			a[k] = s1[k];
		else
		{
			a[k] = s2[x];
			x++;
		}
	} a[i + j] = '\0';
	return (a);
}
