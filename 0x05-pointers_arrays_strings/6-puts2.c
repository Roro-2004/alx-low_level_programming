#include"main.h"
/**
 * puts2 - a func
 * @str: char
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i])
		{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		}
		else
			break;
		i++;
	}
	_putchar('\n');
}
