#include <stdio.h>

void puts_half(char *str) {
    int length = 0;
    int i;
    int start_index;

    // Calculate the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Calculate the starting index for the second half
    start_index = (length + 1) / 2;

    // Print the second half of the string
    for (i = start_index; i < length; i++) {
        putchar(str[i]);
    }

    // Print a new line
    putchar('\n');
}

int main(void) {
    char *str = "0123456789";
    puts_half(str);
    return (0);
}
