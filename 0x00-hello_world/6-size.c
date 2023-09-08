#include <stdio.h>
/**
 * main - this illustrates the main function of the code
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	float e;

	printf("size of a char: %c byte(s)\n", sizeof(a));
	printf("size of an int: %d byte(s)\n", sizeof(b));
	printf("size of a long int: %ld byte(s)\n", sizeof(b));
	printf("size of a long long int: %lld byte(s)\n", sizeof(b));
	printf("size of a float: %f byte(s)\n",  sizeof(e));
	return (0);
}
