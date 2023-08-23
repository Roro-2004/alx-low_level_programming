#include<unistd.h>
#include"main.h"

/**
*_putchar - writes characters m to stdout
*@m: the printed character
*
*Return: on success 1
*	on error -1
*
*/

int _putchar(char m)
{
	return (write(1, &m, 1));
}
