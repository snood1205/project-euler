#define ABS(X) X > 0 ? X : -X
#include <stdio.h>

int p6();

int main(void) {
  printf("P6: %d", p6());
}

int p6() {
  unsigned int ssq, sqs, i;
  for (i = 1; i <= 100; i++) {
    ssq += (i * i);
    sqs += i;
  }
  sqs *= sqs;
  return ABS(sqs - ssq);
}
