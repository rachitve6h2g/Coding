/*
 * Description: This program takes input from a user
 * and checks whether the input is a number or a character.
 * If it's a character then it determines the case of the character
 * and also prints the ASCII value of the character.
 * */

#include <stdio.h>
#include <string.h>

int isChar(char *, int *);
int isNum(char);

int main() {
  int isCapital = 0, a = 0;
  char buffer[10];
  printf("Enter the character or a number: ");
  if (scanf("%s", buffer) != 1 || strlen(buffer) != 1) {
    printf("Invalid input.\n");
    return -1;
  }
  // If the input character/number is really a character/number has
  // to be checked.
  if ((a = isChar(buffer, &isCapital))) {
    printf("The input is a character.\n");
    printf("The ascii of %c = %d\n", buffer[0], a);
    if (isCapital)
      printf("The input character is in upper case.\n");
    else
      printf("The input character is in lower case.\n");
  } else if ((a = isNum(buffer[0]))) {
    printf("The entered input is a number.\n");
  } else
    printf("You did not enter any character or a string.\n");
  return 0;
}

int isChar(char *ch, int *isCapital) {
  int ascii = (int)*ch;
  int chkUpper = 0;
  if ((chkUpper = (ascii >= 65 && ascii <= 90)) ||
      ascii >= 97 && ascii <= 122) {
    *isCapital = chkUpper;
    return ascii;
  } else
    return 0;
}

int isNum(char ch) {
  int ascii = (int)ch;
  return (ascii >= 48 && ascii <= 57);
}
