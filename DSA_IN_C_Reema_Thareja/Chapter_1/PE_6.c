/*
 * This program takes a floatin point number and
 * prints the right most digit of its integral part.
 * */

#include <stdio.h>

int main() {
  float number = 0.0;
  printf("Enter a floating point number: ");
  scanf("%f", &number);
  int num = (int)number;
  int right_most = num % 10;
  printf("The right most digit of the integral part of %.3f = %d\n", number,
         right_most);
  return 0;
}
