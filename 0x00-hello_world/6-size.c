#include <stdio.h>
/**
 * main - this illustrates the main function of the code
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char: %u byte(s)\n", sizeof(a));
	printf("size of an int: %c byte(s)\n", sizeof(b));
	printf("size of a long int: %d byte(s)\n", sizeof(c));
	printf("size of a long long int: %ld byte(s)\n", sizeof(d));
	printf("size of a float: %f byte(s)\n",  sizeof(e));
	return (0);
}
