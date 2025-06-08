//
// Description: This program is to print
// all odd numbers for m to n.
//

#include <stdio.h>

int main() {
  int m, n, i = 0;
  printf("Enter the lower limit: ");
  if (scanf("%d", &m) != 1) {
    printf("Invalid input.\n");
    return -1;
  }
  printf("Enter the upper limit: ");
  if (scanf("%d", &n) != 1) {
    printf("Invalid input.\n");
    return -1;
  }

  if (m >= n) {
    printf("Lower limit must be less than upper limit.\n");
    return -1;
  }

  if (!(m % 2))
    i = m + 1;
  else
    i = m;

  for (; i < n; i += 2) {
    printf("%d\n", i);
  }

  return 0;
}
