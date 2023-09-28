#include <stdio.h>

/**
 * _puts_recursion - print a char s
 * @s: memory pointer to fill
 * Return: void
 */

void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++
	}
	return (void);
}
