//
// Description: Read numbers from the user, until -1 is encountered.
//              Check if the numbers entered are Armstrong numbers or not.
//

#include <stdio.h>

int isArmstrong(int);

int main() {
  int num;
  while (1) {
    printf("Enter a number (enter -1 to quit): ");
    if (scanf("%d", &num) != 1) {
      printf("Invalid input.\n");
      return -1;
    }
    printf("\n");
    if (num == -1) {
      printf("Quitting.\n");
      break;
    }

    if (isArmstrong(num))
      printf("The number is an Armstrong number.\n");
    else
      printf("The number isn't an armstrong number.\n");
  }

  return 0;
}

int isArmstrong(int n) {
  int num = n;
  int armstrong = 0;
  while (num > 0) {
    int right_most = num % 10;
    armstrong += right_most * right_most * right_most;
    num /= 10;
  }
  if (n == armstrong) {
    return 1;
  } else
    return 0;
}
