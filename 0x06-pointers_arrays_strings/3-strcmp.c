#include "main.h"

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return: If str1 < str2, the negative difference of
 * the first unmatched characters.
 *         If s1 == s2, 0.
 *         If s1 > s2, the positive difference of
 *         the first unmatched characters.
 */

int _strcmp(char * s1, char * s2) {
  while ( * s1 && ( * s1 == * s2)) {
    s1++;
    s2++;
  }

  return ( * (unsigned char * ) s1 - * (unsigned char * ) s2);
}

int main(void) {
  char s1[] = "Hello";
  char s2[] = "World!";

  printf("%d\n", _strcmp(s1, s2));
  printf("%d\n", _strcmp(s2, s1));
  printf("%d\n", _strcmp(s1, s1));

  return (0);
}
