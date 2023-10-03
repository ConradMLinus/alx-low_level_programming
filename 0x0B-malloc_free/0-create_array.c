#include <stdio.h>

#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char * buffer, unsigned int size) {
  unsigned int i;

  i = 0;
  while (i < size) {
    if (i % 10) {
      printf(" ");
    }
    if (!(i % 10) && i) {
      printf("\n");
    }
    printf("0x%02x", buffer[i]);
    i++;
  }
  printf("\n");
}


char * create_array(unsigned int size, char c);

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void) {
  char * buffer;

  buffer = create_array(98, 'H');
  if (buffer == NULL) {
    printf("Failed to allocate memory\n");
    return (1);
  }
  simple_print_buffer(buffer, 98);
  free(buffer);
  return (0);
}


char * create_array(unsigned int size, char c) {
  if (size == 0) {
    return NULL;
  }

  char * array = malloc(size * sizeof(char));

  if (array == NULL) {
    return NULL;
  }

  for (unsigned int i = 0; i < size; i++) {
    array[i] = c;
  }

  return (array);
}
