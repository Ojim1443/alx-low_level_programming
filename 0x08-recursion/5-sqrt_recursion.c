#include <stdio.h>

/**
 * _evaluate - evaluate function sqrt
 * @i: integar
 * @n: integer
 * Return: evaluate sqrt
 */

int _evaluate(int i, int n)
{
	/*Evaluate funtion*/
	if (n == 0 || n == 1)
	return (n);
	else if (i * i < n)
	return (_evaluate(i + 1, n));
	else if (i * i == n) /*condition base*/
	return (-1);
	return (i);
}
