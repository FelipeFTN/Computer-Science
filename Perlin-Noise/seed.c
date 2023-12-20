#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_number(int seed, int min_num, int max_num);

int main() {
  int r = random_number(10203040, -5, 5);

  printf("%d\n", r);

  return 0;
}

int random_number(int seed, int min_num, int max_num) {
  int r = 0, low_num = 0, hi_num = 0;

  if (min_num < max_num) {
    low_num = min_num;
    hi_num = max_num + 1; // include max_num in output
  } else {
    low_num = max_num + 1; // include max_num in output
    hi_num = min_num;
  }

  srand((time_t)seed);
  // srand(time(NULL)); // DEBUG ONLY
  r = (rand() % (hi_num - low_num)) + low_num;
  return r;
}
