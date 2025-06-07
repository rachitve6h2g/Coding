/*
 * Description: take a integer number and convert it into
 * Decimal
 * Binary,
 * Octal,
 * Hexadecimal
 * */

#include <stdio.h>

void toBinary(int);
void toOctal(int);
void toHexadecimal(int);

int main() {
  int number;
  printf("Enter an integer number: ");
  scanf("%d", &number);
  getchar();

  if (number == 0) {
    printf("0\n");
    return 0;
  }

  printf("Binary = ");
  toBinary(number);
  printf("\n");

  printf("Octal = ");
  toOctal(number);
  printf("\n");

  printf("Hexadecimal = ");
  toHexadecimal(number);
  printf("\n");

  return 0;
};

void toBinary(int num) {
  if (num == 0)
    return;
  toBinary(num / 2);
  printf("%d", num % 2);
}

void toOctal(int num) {
  if (num == 0)
    return;
  toOctal(num / 8);
  printf("%d", num % 8);
}

void toHexadecimal(int num) {
  if (num == 0)
    return;

  int res = num % 16;
  if (res == 15)
    printf("F");
  else if (res == 14)
    printf("E");
  else if (res == 13)
    printf("D");
  else if (res == 12)
    printf("C");
  else if (res == 11)
    printf("B");
  else if (res == 10)
    printf("A");
  else
    printf("%d", res);
}
