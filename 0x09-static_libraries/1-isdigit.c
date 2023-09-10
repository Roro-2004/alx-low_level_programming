#include "main.h"
/**
 * _isdigit - a func that checks a no is a single digit or not
 *
 * @c: int
 *
 * Return: 0 if not 1 if true
 *
*/
int _isdigit(int c)
{
	int i, bo = 0;

	for (i = 48; i <= 57; i++)
	{
		if (i == c)
		{
			bo = 1;
			break;
		}
	}
	if (bo == 1)
	{
		return (1);
	}
	else
		return (0);
}
