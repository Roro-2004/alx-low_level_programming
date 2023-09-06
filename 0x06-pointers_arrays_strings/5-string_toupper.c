#include"main.h"
/**
 * *string_toupper - a func
 * @s: string
 * Return: s
*/
char *string_toupper(char *s)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
	if (s[i])
		i++;
	else
		break;
	}
	for (j = 0; j < i; j++)
	{
		if (s[j] <= 90)
			continue;
		else if (s[j] >= 97 && s[j] <= 122)
			s[j] -= 32;
	}
	return (s);
}
