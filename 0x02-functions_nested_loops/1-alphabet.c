#include "main.h"

/**
 * prints the alphabet, in lowercase, followed by a new line.
 * return: void
 */

 void print_alphabet(void)
{
	int c;

	for (c = 'a'; c<= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
