
#include<stdio.h>

int main()
{
  int a = 545;
  char b = 'E';
  float c = 12.456;
  double d = 123.456;

  // print value and size of an int variable
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));
printf("int a value: %d  and size: %d bytes\n", b, sizeof(b));
printf("int a value: %d and size: %d bytes\n", c, sizeof(c));
printf("int a value: %d and size: %d bytes\n", d, sizeof(d));
return 0;
}
