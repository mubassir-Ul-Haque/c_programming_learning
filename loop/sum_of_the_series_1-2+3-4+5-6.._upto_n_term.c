#include <stdio.h>
int main() {
  int n;
  printf("enter a number :  ");
  scanf("%d", &n);
  int sum=0;
  for(int i=1;i<=n;i++){
    if(i%2!=0) sum=sum+i;
    else sum=sum-i;
  } printf("sum of the series upto %d terms is %d\n",n,sum);
  return 0;
}