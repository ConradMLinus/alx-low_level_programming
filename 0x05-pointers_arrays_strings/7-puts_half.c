#include <stdio.h>

void puts_half(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}

	start_index = (length + 1) / 2;
	for (i = start_index; i < length; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}

int main(void)
{
	char *str = "0123456789";
	puts_half(str);
	return (0);
}
