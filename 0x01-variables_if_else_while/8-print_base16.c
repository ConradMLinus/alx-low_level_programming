#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase, followed by a new
 * line.
 * Return: 0
 */

int main(void)
{
	char i;
	char j = '0';

	while (j <= '9')
	{
		putchar(j);
		j++;
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
