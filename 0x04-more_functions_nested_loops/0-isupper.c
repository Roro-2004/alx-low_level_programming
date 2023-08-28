#include"main.h"
/**
 * _isupper - a func that checks if char is uppercase or not
 *
 * @c: char
 *
 *Return: 0 for lower 1 of upper
*/
int _isupper(int c)
{
	int i, x = 1;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			x = 0;
			break;
		}
	}
	if (x == 0)
	{
		return (1);
	}
	else
		return (0);
}
