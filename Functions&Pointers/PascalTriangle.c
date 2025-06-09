#include <stdio.h>
int factorial(int x) {
  int fact=1;
  for (int i = 1; i <= x; i++) {
    fact = fact * i;
  }
  return fact;
}
int combination(int n, int r) {
      int nfact = factorial(n);      // n!
  int rfact = factorial(r);      // r!
  int nrfact = factorial(n - r); // n-r !
  return nfact / (rfact * nrfact);
}
int main() {
  int a,n,r;
  printf("Enter number of rows : ");
  scanf("%d",&a);
for(int row=0;row<=a;row++){
    for(int col=0;col<=a-row;col++){
        printf(" ");
    }
    for(int col=0;col<=row;col++){
        n=row;
        r=col;
        int ans=combination(n,r);
        printf("%d ",ans);
    }
    printf("\n");
}
  return 0;
}