#include"main.h"
/**
 * _abs - function that returns the abs value
 *
 * @x: the no
 *
 * Return: x if it's +ve x*-1 if it is -ve
 *
*/
int _abs(int x)
{
	if (x < 0)
		x = x * -1;
	return (x);
}
