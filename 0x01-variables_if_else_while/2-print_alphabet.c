#include <stdio.h>

/**
 * main - this is the main function
 * Return: 0
 */

int main(void)

{
	char low, up;

	for (up = 'A'; up <= 'Z'; up++)
		putchar(up);

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);

	putchar('\n');

	return (0);
}
