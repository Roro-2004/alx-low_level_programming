#include"main.h"
/**
 * _strspn - a func
 * @s: array
 * @accept: 2nd array
 * Return: no
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, k, c = 0;

	while (accept[i] != '\0')
	{
		if (accept[i])
			i++;
		else
			break;
	}
	for (j = 0; s[j] != '\0'; j++)
	{
		for (k = 0; k < i; k++)
		{
			if (accept[k] == s[j])
			{
				c++;
				break;
			}
			else if (accept[k + 1] == '\0')
				return (c);
		}
	}
	return (c);
}
