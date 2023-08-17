#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: prints usinng putchar
 *
 * Return: 0 (sucess)
 *
*/
int main(void)
{	char arr[] = "_putchar";
	int i;

	for (i = 0; i < 8 ; i++)
		_putchar(arr[i]);
	_putchar('\n');

	return (0);
}
