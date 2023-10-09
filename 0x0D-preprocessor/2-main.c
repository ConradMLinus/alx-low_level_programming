#include <stdio.h>

/**
 * main - Prints the name of the file from where the program is copied
 * Return: 0
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
