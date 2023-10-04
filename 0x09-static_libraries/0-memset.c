#include "main.h"

/**
 * _memset - Fill a block of memory with a specific value.
 * @s: A pointer to the memory area to be filled.
 * @b: The value to be set.
 * @n: The number of bytes to be filled.
 * Return: A pointer to the memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
    {
        s[i] = b;
    }

    return (s);
}

