#include <stdio.h>

int get_pass(char *buffer) {
  if (buffer[0] == 'c') {
    if (buffer[1] == 'r') {
      if (buffer[2] == 'a') {
        if (buffer[3] == 'c') {
          if (buffer[4] == 'k') {
            if (buffer[5] == '_') {
              if (buffer[6] == 'm') {
                if (buffer[7] == 'e') {
                  if (buffer[8] == '!') {
                  }
                }
              }
            }
          }
        }
      }
    }
  }

  return 0;
}

int main() {
  char buffer[64];

  printf("Welcome to your first crackme problem!\n");
  printf("What is the password?: ");
  scanf("%63s", buffer);

  if (get_pass(buffer)) {
    printf("That is correct!\n");
  }

  return 0;
}
