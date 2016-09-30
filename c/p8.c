#include <stdio.h>

static int numbers[1000];

unsigned long p8();

unsigned long product(int);

int main() {
  printf("P8: %ld\n", p8());
}

unsigned long p8() {
  FILE * data;
  data = fopen("p8.dat", "r");
  int i;
  for (i = 0; fscanf(data, "%1d", &numbers[i]) != EOF; i++);
  unsigned long max;
  max = 0;
  for (i = 0; i < 1000 - 13; i++)
    if (product(i) > max)
      max = product(i);
  return max;
}

unsigned long product(int i) {
  unsigned long p;
  p = 1;
  int j;
  for (j = i; j < i + 13; j++)
    p *= numbers[j];
  return p;
}
