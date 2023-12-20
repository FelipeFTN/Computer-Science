#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand((time_t)1703026761);
  int r = rand();
  // printf("%ld", time((time_t)1703026761));
  printf("%d", r);

  return 0;
}
