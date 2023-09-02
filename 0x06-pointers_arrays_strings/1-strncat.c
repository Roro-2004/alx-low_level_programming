#include"main.h"
/**
 * _strncat - a func
 * @dest: arr1
 * @src: arr2
 * @n: int
 * Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0, k, x = 0;

while (dest[i] != '\0')
{
if (dest[i])
i++;
else
break;
}
for (k = i; (x < n) && (x < 98); k++)
{
dest[k] = src[x];
x++;
}
return (dest);
}
