#include <stdio.h>

int is_palindrome(int);

int p4(void);

int main() {
  printf("P4: %d", p4());
}

int is_palindrome(int i) {
  return i / 100000 == i % 10 &&
    (i / 10000) % 10 == (i % 100) / 10 &&
    (i / 1000) % 100 == (i % 1000) / 100;
}

int p4() {
  int i, j;
  for (i = 999999; i >= 100000; i--) {
    if (!is_palindrome(i))
      continue;
    for (j = 100; j <= 999 && i / j >= 100; j++)
      if (i / j >= 100 && i / j <= 999 && i % j == 0)
        return i;
  }
}
