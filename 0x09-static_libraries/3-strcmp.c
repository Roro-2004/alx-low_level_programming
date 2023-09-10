#include"main.h"
/**
 * _strcmp - a func
 * @s1: arr
 * @s2: arr
 * Return: x
*/
int _strcmp(char *s1, char *s2)
{
	int x = 0, i = 0;

	while (s1[i])
	{
		if (s1[i] != s2[i])
		{x = (((int)s1[i] - 48) - ((int)s2[i] - 48));
			break;
		}
		i++;
	}
	return (x);
}
