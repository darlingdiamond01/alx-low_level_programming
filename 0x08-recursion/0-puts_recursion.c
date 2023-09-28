#include "main.h"

/**
 * _puts_recursion - print a char s
 * @s: memory pointer to fill
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar("%s\n", s);
		s = s + 1;
	}
}
