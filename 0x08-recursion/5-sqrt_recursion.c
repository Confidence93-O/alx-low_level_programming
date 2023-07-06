#include "main.h"
#include <stdio.h>

int _sqrt_recursion(int n);

/**
 * _sqrt_recursion _returns the natursl sqaure root of a number
 * @n: number to calculate the natural square root
 *
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Caluclates natural square root
 * @n: number to calculate the sqaure root
 * @i: iterate number
 *
 * Return: the natuarl square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}