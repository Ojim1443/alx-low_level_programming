#include "main.h"
/**
 * _strlen_recursion - The length of a string.
 * @s: Pointer block of memory to fill.
 * Return: strlen_recursion
 */

int _strlen_recursion(char *s)
{
	/*Base condition*/

	if (*s == '\0')
	return (0);
	else
	return (1 + _strlen_recursion(s + 1)); /*Sum 1*/
}
