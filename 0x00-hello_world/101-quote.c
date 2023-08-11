#include<unistd.h>
/**
 * main -Entry point
 *
 * Description: A C program that writes with write fuction
 *
 * Return: 1 (not sucessful)
*/
int main(void)
{
	char iced[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, iced, 59);
	return (1);
}
