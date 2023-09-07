#include"main.h"
/**
 * _strstr - func
 * @haystack: array
 * @needle: mango
 * Return: 0
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *f = haystack;
		char *l = needle;

		while (*f == *l && *l != '\0')
		{
			f++;
			l++;
		}
		if (*l == '\0')
			return (haystack);
	}
	return ('\0');
}
