#include <math.h>
#include <stdio.h>
int main() {
  int a;
  printf("Enter  1st number : ");
  scanf("%d", &a);
  int b;
  printf("Enter  2nd number : ");
  scanf("%d", &b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("a=%d\nb=%d\n",a,b);
  return 0;
}