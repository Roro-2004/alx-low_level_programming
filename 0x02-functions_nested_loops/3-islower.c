#include "main.h"
/**
 * _islower - a function that checks is it a lower case or not
 *
 * @c: the character that checks weather it's a lower case or not
 *
 * Return: 0 it's not a lower case 1 it's a lower case
 */
int _islower(int c)
{
	int b = 0, j;

	for (j = 'a'; j <= 'z'; j++)
	{
		if (j == c)
		{
		b = 1;
		break;
		}
	}
	if (b == 1)
		return (1);
	else
		return (0);

}
