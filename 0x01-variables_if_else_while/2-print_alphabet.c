#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: A C program that writes the lowercase alphabet
 *
 * Return: Always 0 (sucess)
*/

int main(void)
{
char x = 'a';

while (x <= 'z')
{
	putchar(x);
	x++;
}
}
