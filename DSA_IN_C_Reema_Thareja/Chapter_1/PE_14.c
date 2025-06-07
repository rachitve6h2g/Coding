/*
 *  Description: Program calculates the area of a triangle
 *  using functions.
 * */

#include <math.h>
#include <stdio.h>

float ar(float, float, float);
int checkTriangle(float, float, float);

int main() {
  float a, b, c;
  printf("Enter the sides of the triangle in meters\n");
  printf("Side A = ");
  if (scanf("%f", &a) != 1 || a <= 0) {
    printf("Invalid input for side A\n");
    return -1;
  }

  printf("Side B = ");
  if (scanf("%f", &b) != 1 || b <= 0) {
    printf("Invalid input for side B.\n");
    return -1;
  }

  printf("Side C = ");
  if (scanf("%f", &c) != 1 || c <= 0) {
    printf("Invalid input for side C.\n");
    return -1;
  }

  if (checkTriangle(a, b, c) == 0) {
    printf("The dimensions you entered are not forming a Triangle\n");
    return -1;
  }

  printf("\nArea of the triangle with sides %.2f, %.2f and %.2f = %.2f\n", a, b,
         c, ar(a, b, c));
  return 0;
}

float ar(float a, float b, float c) {
  float s = (a + b + c) / 2;
  return (float)sqrt(s * (s - a) * (s - b) * (s - c));
}

int checkTriangle(float a, float b, float c) {
  if (a > 0 && b > 0 && c > 0)
    if (a + b > c && b + c > a && a + c > b)
      return 1;

  return 0;
}
