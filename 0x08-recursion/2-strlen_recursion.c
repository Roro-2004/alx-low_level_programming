#include"main.h"
/**
 * _strlen_recursion - a func
 * @s: arr
 * Return: l
*/
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l = _strlen_recursion(s + 1) + 1;

	}
	return (l);
}
