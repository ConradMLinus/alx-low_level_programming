#include<stdio.h>

/**
 * main - Entry point
 * Prints the size of various types on the computer it is compiled and run on.
 * Return: 0
 */

int main(void)
{
	printf("Size of a char: %u byte(s)", sizeof(char));
	printf("\nSize of an int: %u byte(s)", sizeof(int));
	printf("\nSize of a long int: %u byte(s)", sizeof(long int));
	printf("\nSize of a long long int: %u byte(s)", sizeof(long long int));
	printf("\nSize of a float: %u byte(s)\n", sizeof(float));
	return (0);
}
