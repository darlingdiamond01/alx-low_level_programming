#include "main.h"

/**
 * _print_rev_recursion - prints the string in reverse
 * @s: string to print 
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	char *nerd = s;

	while (*s)
	{
		_putchar(*nerd);
		nerdd++;
	}
	_putchar('\n');
}
