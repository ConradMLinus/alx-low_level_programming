#include "main.h"

/**
 * prints the alphabet, in lowercase, followed by a new line.
 * return: void
 */

int _putchar(char c);
void print_aplhabet(void)
{
	char letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
