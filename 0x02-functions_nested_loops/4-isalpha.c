#include "main.h"
/**
* _isalpha - a function that cheaks weather it's a letter or not
*
* @c: the character
*
* Return: 1 if i's a letter 0 otherwise
*/
int _isalpha(int c)
{
	int j, i;

	for (i = 'a' ; i <= 'Z' ; i++)
	{
		if (c == i)
		{
			j = 1;
			break;
		}
		else
			j = 0;
	}
	if (j == 1)
		return (1);
	else
		return (0);

}
