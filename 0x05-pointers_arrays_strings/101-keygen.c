#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for 101-crackme
 * Return: 0
 */

int main(void)
{
	char password[100];
	int i, sum, diff;
	srand(time(NULL));

	sum = 0;
	i = 0;
	while (sum < 2772 - 122)
	{
		password[i] = rand() % 94 + 33;
		sum += password[i++];
	}

	diff = 2772 - sum;
	password[i] = diff;
	password[i + 1] = '\0';

	printf("%s", password);

	return (0);
}
