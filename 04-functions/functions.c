#include <stdio.h>

void hello(char*);

void goodbye(void);

int plus_one(int n) {
  return n + 1;
}

int main(void) {
  int i = 10, j;

  j = plus_one(i);

  printf("i + 1 = %d\n", j);

  hello("Luffy");
  goodbye();
}

void hello(char* name) {
  printf("Hello, %s!\n", name);
}

void goodbye(void) {
  printf("Goodbye\n");
}
