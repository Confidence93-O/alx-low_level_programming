#include <unistd.h>
/**
 * main - 5-printf.c
 * description - Write a C program that print exactly with proper grammar,
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(2,
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
		59);
	return (1);
}
