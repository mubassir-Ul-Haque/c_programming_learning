#include <stdio.h>
int power(int a,int b,int c){
   if(b==0)
   return c;
return power(a,b-1,c*a);

}
int main() {
  int a;
  printf("Enter base : ");
  scanf("%d", &a);
  int b;
  int c=1;
  printf("Enter power : ");
  scanf("%d", &b);
  int p=power(a,b,c);
  printf("%d\n",p);
  return 0;
}