#include <stdio.h>

/**
 * main - progrm that prints the upper and lower case alphabet
 *
 * Return: 0
 */

int main(void)

{
	char letter;
	for(letter = 'a'; letter <= 'z'; letter++)

	{
		if(letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar("\n");
	return (0);
}
