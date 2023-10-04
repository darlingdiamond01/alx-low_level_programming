#include "main.h"

/**
 * _strncat - Concatenate two strings up to n characters.
 * @dest: The destination string.
 * @src: The source string to be appended to dest.
 * @n: The maximum number of characters to concatenate.
 * Return: A pointer to the resulting string (dest).
 */

char *_strncat(char *dest, char *src, int n)
{
    int dest_len = 0;
    int i = 0;

    // Find the length of dest
    while (dest[dest_len] != '\0')
    {
        dest_len++;
    }

    // Append src to dest, up to n characters or until src's end
    while (src[i] != '\0' && i < n)
    {
        dest[dest_len] = src[i];
        dest_len++;
        i++;
    }

    // Null-terminate the concatenated string
    dest[dest_len] = '\0';

    return (dest);
}
