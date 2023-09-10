#include <stdio.h>

/**
 * main - this is the main function
 * Return: 0
 */

int main(void)

{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);

	putchar('\n');

	return (0);
}
