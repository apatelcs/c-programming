#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int i, j, x;

  i = 2;
  float f = 3.14;
  char *s = "Hello, world!";
  x = 3;

  printf("%s i = %d and f = %f!\n", s, i, f);
  printf("%d\n", true == 12);
  printf("%d\n", false == 0);

  // below is an example of the ternary operator
  printf("The number %d is %s.\n", x, x % 2 == 0 ? "even" : "odd");
  
  i = 10;
  j = 5 + i++;
  printf("Post increment yields i = %d, j = %d\n", i, j);

  i = 10;
  j = 5 + ++i;
  printf("Pre increment yields i = %d, j = %d\n", i, j);

  // comma operator results in value of the rightmost expression in the list
  x = (1, 2, 3, 4, 5);
  printf("x is %d\n", x);

  // %zu is string format specifier for type size_t
  int a = 999;
  printf("Size of a = 999 is %zu\n", sizeof(a));
  printf("Size of 3.14 is %zu\n", sizeof(3.14));
  // %zd is string format specifier for negative type size_t
  printf("Size of a positive number is %zd\n", sizeof(5));
  printf("Size of a negative number is %zd\n", sizeof(-5));

  x = 1;

  switch (x) {
    case 1:
      printf("1\n");
      // you need break here otherwise it will fall through
      // and execute the print statement for 2
    case 2:
      printf("2\n");
      break;
    case 3:
      printf("3\n");
      break;
  }
}
