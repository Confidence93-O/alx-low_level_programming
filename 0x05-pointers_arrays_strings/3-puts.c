#include "main.h"

/**
 * _puts - Prints a string
 * @str: The String to print
 * Return: Void
 */

void _puts(char *str)

{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
