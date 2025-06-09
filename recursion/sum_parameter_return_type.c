#include <stdio.h>
int sum(int n,int s){
    if(n==0){
        return s;
    }
  return sum(n-1,s+n);
}
int main() {
  int n;
  printf("Enter a number : ");
  scanf("%d", &n);
  int total=sum(n,0);
  printf("%d\n",total);
  return 0;
}