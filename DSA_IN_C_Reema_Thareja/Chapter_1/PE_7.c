/*
 * Description: This program calculates Simple interest and compound interest.
 */

#include <math.h>
#include <stdio.h>

float si(float, float, float);
float ci(float, float, float, int);

int main() {
  float principle, rate, time, simple_interest, compound_interest;
  int n; // for compound_interest being compounded more than once in a year.

  // Take the values from the user.
  printf("Enter the Principle amount = ");
  scanf("%f", &principle);

  printf("Enter the Rate in %% = ");
  scanf("%f", &rate);

  printf("Time (in years) = ");
  scanf("%f", &time);

  printf("Enter the number of times interest is compounded per year: ");
  printf("Example 4 for quaterly, 12 for monthly, 1 for annually: ");
  scanf("%d", &n);

  printf("\n");
  simple_interest = si(principle, rate, time);
  compound_interest = ci(principle, rate, time, n);

  printf("Simple interest for the amount you entered: %.2f\n",
         si(principle, rate, time));

  printf("Compound interest (compounded %d times per year) for the amount you "
         "entered: %.2f\n",
         (n < 1 ? 1 : n), ci(principle, rate, time, n));

  return 0;
}

float si(float p, float r, float t) { return (p * r * t) / 100; }

float ci(float p, float r, float t, int n) {
  if (n < 1) {
    return p * pow((1 + r / 100), t) - p;
  } else {
    return p * pow(1 + r / (n * 100), n * t) - p;
  }
}
