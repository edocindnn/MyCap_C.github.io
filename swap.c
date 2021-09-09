#include<iostream.h>
#include<stdio.h>
int main()
{
  int a = 5, b = 6, c;
  printf("Before swapping:\na = %d, b = %d",a,b);
  c = a;
  a = b;
  b = c;
  printf("After swapping:\na = %d, b = %d",a,b);
  return 0;
}
