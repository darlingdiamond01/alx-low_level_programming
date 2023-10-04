#include "main.h"

/**
 * _strspn - Calculate the length of the initial segment of a string
 *            consisting of characters in another string.
 * @s: The string to be analyzed.
 * @accept: The string containing characters to match against.
 *
 * Return: The length of the initial segment of @s that matches @accept.
 */

unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int is_match;

    while (*s != '\0')
    {
        is_match = 0; // Initialize to 0 for each character in s

        for (char *a = accept; *a != '\0'; a++)
        {
            if (*s == *a)
            {
                is_match = 1;
                break; // Character in s matches a character in accept, exit loop
            }
        }

        if (is_match)
        {
            count++;
            s++;
        }
        else
        {
            break; // Character in s does not match any character in accept, exit loop
        }
    }

    return (count);
}
