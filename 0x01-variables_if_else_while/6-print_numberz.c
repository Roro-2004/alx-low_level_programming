#include<stdio.h>
/**
 * main -Entry point
 *
 * Description: A C program that prints nos from 0 to 9
 *
 * Return: 0 (success)
 *
*/
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
	putchar(i - 48);
	}
	putchar('\n');
	return (0);
}
