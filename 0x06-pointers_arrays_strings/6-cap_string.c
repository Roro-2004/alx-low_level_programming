#include"main.h"
#include<stdio.h>
/**
 * isdel - a func
 * @s: array
 * Return: int
*/
int isdel(char s)
{
	int i;
	char del[] = ",, ;, ., !, ?, \", (, ), {, }";

	for (i = 0; i < 12; i++)
		if (s == del[i])
			return (1);
	return (0);
}
/**
 * *cap_string - a func
 * @s: array
 * Return: a char
*/
char *cap_string(char *s)
{
	int equal = 1, islower = 0;
	char *ptr = s;

	while (*s)
	{
		if((*s >= 97) && (*s <= 122))
			islower = 1;
		if (isdel(*s))
			equal = 0;
		else if (islower && (equal))
		{
			*s -= 32;
			equal = 0;
		}
		else
			equal = 0;
		islower = 0;
		s++;
	}
	return (ptr);
}
