#include <stdio.h>
int stairs(int a){
   if(a==0) return 1;
   if(a==1) return 1;
   if(a==2) return 2;
   if(a==3) return 4;
return stairs(a-1)+stairs(a-2)+stairs(a-3);
}
int main() {
  int a;
  printf("Enter number of stairs : ");
  scanf("%d", &a);
  int ways=stairs(a);
  printf("%d\n",ways);
  return 0;
}