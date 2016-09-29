#include <stdio.h>

unsigned long p5();
int divisible(unsigned long);

int main() {
  printf("P5: %lu", p5());
}

int divisible(unsigned long i) {
  return i % 20 == 0 && i % 19 == 0 && i % 18 == 0 &&
    i % 17 == 0 && i % 16 == 0 && i % 15 == 0 &&
    i % 14 == 0 && i % 13 == 0 && i % 12 == 0 &&
    i % 11 == 0 && i % 10 == 0 && i %  9 == 0 &&
    i %  8 == 0 && i % 07 == 0 && i % 06 == 0 &&
    i % 05 == 0 && i % 04 == 0 && i % 03 == 0 &&
    i % 02 == 0 && i % 01 == 0;
}

unsigned long p5() {
  unsigned long j;
  for (j = 2520L; !divisible(j); j += 20);
  return j;
}

