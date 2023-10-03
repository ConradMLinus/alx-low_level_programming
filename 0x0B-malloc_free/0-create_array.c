#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and
 *                initializes it with a specific char.
 * @size: The size of the array to be initialized.
 * @c: The specific char to intialize the array with.
 *
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */


int main(void)
{
    char *buffer;

    buffer = create_array(98, 'H');
    if (buffer == NULL)
    {
        printf("Failed to allocate memory\n");
        return (1);
    }

    simple_print_buffer(buffer, 98);
    free(buffer);
    return (0);
}
