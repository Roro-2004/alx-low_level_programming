#include"main.h"
/**
 * *_strchr - func
 * @s: array
 * @c: char
 * Return: x
*/
char *_strchr(char *s, char c)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		if (s[i])
			i++;
		else
			break;
	}
	for (j = 0; j <= i; j++)
	{
		if (s[j] == c)
		{
			return (s + j);
		}
	}
	return ('\0');
}
