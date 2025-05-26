#include <stdio.h>
int main() {
  int n;
  printf("enter a number:  ");
  scanf("%d", &n);

 if(n==1){
    printf("neither prime or composite number\n");
    return 0;
 }
  for (int i = 2; i < n; i++) {
   if(n%i==0){
        printf("composite number\n");
        break; 
  } else printf("prime number\n");
  break;
  }
  return 0;
}