#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocate memory using malloc and terminate on failure.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);

    if (ptr == NULL)
    {
        exit(98); // Terminate with status 98 on malloc failure
    }

    return ptr;
}

int main(void)
{
    unsigned int size = 1024; // Change the size as needed
    char *ptr;

    ptr = malloc_checked(size);

    // Use the allocated memory as needed

    free(ptr); // Don't forget to free the memory when done

    return (0);
}

