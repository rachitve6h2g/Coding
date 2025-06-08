//
// Description: This is a program to print prime
// numbers from m to n.
//

#include <math.h>
#include <stdio.h>

int isPrime(int);

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

  if (m > n) {
    printf("Please enter the lower limit less than the uppper limit.\n");
    return -1;
  }

  printf("These are the prime numbers b/w %d and %d\n", m, n);
  for (i = m; i < n; i++) {
    if (isPrime(i))
      printf("%d\n", i);
  }

  return 0;
}

int isPrime(int num) {
  if (num > 1) {
    for (int i = 2; i <= sqrt(num); i++) {
      if (!(num % i))
        return 0;
    }
  }

  return 1;
}
