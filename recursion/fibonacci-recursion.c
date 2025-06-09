#include <stdio.h>
int term(int a){
   if(a==0)
   return 1;
if(a==1)return 0;
return term(a-1)+ term(a-2); //fibonacchi term

}
int main() {
  int a;
  printf("Enter number of turms : ");
  scanf("%d", &a);
  printf("%d\n",term(a));
  return 0;
}