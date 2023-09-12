#include <stdio.h>

/**
 * print_alphabet - Prints the alphabet, in lowercase, followed by a new line.
 * Return: void
 */

void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
