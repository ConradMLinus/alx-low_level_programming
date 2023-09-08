#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, follwed by a new line
 * Return: 0
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		puchar(i);
	putchar('\n');
	return (0);
}
