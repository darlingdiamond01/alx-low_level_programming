#include "main.h"

/**
 * _strcpy - Copy a string to another.
 * @dest: The destination buffer.
 * @src: The source string to be copied.
 *
 * Return: A pointer to the destination buffer (dest).
 */

char *_strcpy(char *dest, char *src)
{
    int i = 0;

    // Copy characters from src to dest until null terminator
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    // Null-terminate the destination string
    dest[i] = '\0';

    return (dest);
}
