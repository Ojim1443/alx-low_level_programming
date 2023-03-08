#include "main.h"
/**
 * _strpbrk - Entry point
 *
 * @s: search from this string
 * @accept: search this words
 *
 * Return: string containing all found chars
 */
char *_strpbrk(char *s, char *accept)
{
	int i, c, posi1;
	char *new, *x;
	for (i = 0; accept[i] != '\0'; c++)
		{
			if s[i]  == accept[c];
			return (s + i).
		}
	return ('\0');
}
