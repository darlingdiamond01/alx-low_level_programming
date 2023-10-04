#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The string to be converted.
 * Return: The integer value of the converted string.
 */

int _atoi(char *s)
{
    int result = 0;
    int sign = 1; // Initialize sign as positive
    int i = 0;

    // Handle leading '+' or '-'
    if (s[0] == '-')
    {
        sign = -1; // Set sign to negative
        i++;
    }
    else if (s[0] == '+')
    {
        i++; // Skip leading '+'
    }

    // Process the digits in the string
    while (s[i] != '\0')
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            result = result * 10 + (s[i] - '0');
        }
        else
        {
            // If a non-digit character is encountered, stop
            break;
        }
        i++;
    }

    // Apply the sign
    return (result * sign);
}
