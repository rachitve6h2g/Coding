/*
 * Description: This program is to count the number of vowels from a text.
 * Modifications: Read text from a file and then count the number.
 * Answer to problem 2.
 */

#include <stdio.h>
#include <string.h>

int isVowel(char ch) {
  switch (ch) {
  case 'a':
  case 'A':
  case 'e':
  case 'E':
  case 'i':
  case 'I':
  case 'o':
  case 'O':
  case 'u':
  case 'U':
    return 1;
    break;
  default:
    return 0;
    break;
  }
  return 0;
}

int main() {
  char str[100];
  int count = 0;
  printf("Enter your name: ");
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")] = 0;

  int length_of_string = strlen(str);

  int i = 0;
  while (i < length_of_string) {
    if (isVowel(str[i]))
      count++;
    i++;
  }
  printf("Number of vowels in the string entered: %d\n", count);
  return 0;
}
