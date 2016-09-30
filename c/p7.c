#include <stdio.h>
#define MAX 500000

static int tab[MAX];


int p7();

int min();

void sieve(void);

int main() {
  printf("P7: %d", p7());
}

int min() {
  int i;
  for (i = 0; tab[i] == 0; i++);
  return tab[i];
}

void sieve(void) {
  int i, m;
  for (i = 0; i < MAX; i++)
    tab[i] = i;
  m = min();
  while (m * m <= MAX) {
    for (i = 0; i < MAX; i += m)
      tab[i] = 0;
    m = min();
  }
}

int p7() {
  int i, j;
  for(i = 0; j < 10001; i++)
    if (tab[i] != 0)
      j++;
  return tab[i];
}
