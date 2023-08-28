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
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
		return (1);
		}
		else
		{
			return (0);
		}
	}
}
