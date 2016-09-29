#include <stdio.h>

static long factors[2048];

int is_prime(long);

void factorize(long);

long max(void);

int main(void) {
  factorize(600851475143);
  printf("P3: %ld", max());
}

int is_prime(long i) {
  if (i == 2 || i == 3)
    return 1;
  if (i % 2 == 0 || i % 3 == 0)
    return 0;
  long j;
  j = 5;
  while (j * j <= i) {
    if (i % j == 0 || i % (j + 2) == 0)
      return 0;
    j += 6;
  }
  return 0;
}

void factorize(long x) {
  int i, j;
  i = 0;
  j = 2;
  while (x != 1) {
    if (x % j == 0) {
     factors[i] = j;
     i++;
     x /= j;
     j = 2;
    } else {
      j++;
    }
  }
}

long max(void) {
  long max = 0;
  for (int i = 0; i < 2048; i++)
    if (factors[i] > max)
      max = factors[i];
  return max;
}
