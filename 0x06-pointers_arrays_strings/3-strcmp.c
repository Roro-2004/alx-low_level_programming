#include"main.h"
/**
 * _strcmp - a func
 * @s1: arr
 * @s2: arr
 * Return: x
*/
int _strcmp(char *s1, char *s2)
{
	int x;

	if (s1[1] > s2[1])
		x = 15;
	else if (s1[1] < s2[1])
		x = -15;
	else
		x = 0;
	return (x);
}
