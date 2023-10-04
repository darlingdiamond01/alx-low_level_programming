#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _puts - Print a string to the standard output.
 * @str: The string to be printed.
 */
void _puts(char *str)
{
    char *current_char = str;

    while (*current_char != '\0')
    {
        write(1, current_char, 1); // Use the write system call to print one character
        current_char++;
    }
    write(1, "\n", 1); // Print a newline character at the end
}
