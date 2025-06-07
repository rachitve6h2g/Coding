// This programs counts the number of even number
// b/w 1-200 and print their sum.
// It is now modified to take input from the user.

#include <stdio.h>

int isEven(int); // Function to check whether a number is int or not.

int main() {
  int lowerLimit = 1, upperLimit = 200, sum = 0, countEven = 0;
  printf("Enter the lowerLimit: ");
  scanf("%d", &lowerLimit);
  printf("Enter the upperLimit: ");
  scanf("%d", &upperLimit);
  int i = lowerLimit;
  int n = upperLimit;

  if (lowerLimit >= upperLimit) {
    if (lowerLimit == upperLimit && isEven(lowerLimit)) {
      printf("You entered the upper limit same as the lower limit, which is "
             "even.\n");
      return 0;
    } else if (lowerLimit > upperLimit) {
      printf("Invalid bounds specified\n");
      return 1;
    }
  }

  while (i <= n) {
    if (isEven(i) == 1) {
      countEven++;
      sum += i;
    }
    i++;
  }
  printf("there are %d even numbers b/w %d and %d\n", countEven, lowerLimit,
         upperLimit);
  printf("And there sum is %d\n", sum);

  return 0;
}

int isEven(int a) {
  if (a % 2 == 0)
    return 1;
  else
    return 0;
}
