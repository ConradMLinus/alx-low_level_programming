#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * malloc_checked - Allocates memory using malloc
 * @b: The number of bytes to allocate
 *
 * Return: Apointer to the allocated memory
 *         If malloc fails, exits with status 98
 */

void *malloc.checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
