#include <stdio.h>

/**
 * main - progrm that prints the upper and lower case alphabet
 *
 * Return: 0
 */

int main(void)

{
	char low, up;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);

	for (up = 'A'; up <= 'Z'; up++)
		putchar(up);

	putchar('\n');

	return (0);
}
