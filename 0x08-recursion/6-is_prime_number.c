#include"main.h"
/**
 * check - func
 * @n: par
 * @o : par
 * Return: 0
*/
int check(int n, int o)
{
	if (o >= n && n > 1)
		return (1);
	else if (n % o == 0 || n <= 1)
		return (0);
	else
		return (check(n, o + 1));
}
/**
 * is_prime_number - func
 * @n: par
 * Return: 0
*/
int is_prime_number(int n)
{
	return (check(n, 2));
}
