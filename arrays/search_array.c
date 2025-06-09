#include <stdio.h>
#include <stdbool.h>
int main() {
  int n;
  int x;
  printf("enter the size of your array : ");
  scanf("%d", &n);
   printf("enter the value you want search in your array : ");
  scanf("%d", &x);
  int index=-1;
  bool flag=false;
  int arr[n];
  for (int i = 0; i <= n - 1; i++) {
    printf("enter the element no %d :", i + 1);
    scanf("%d", &arr[i]);
  }
  for(int i=0;i<=n-1;i++){
    if(arr[i]==x){
      flag = true;
      index=i;
      break;
    }
  }
  if(flag==false){
    printf("your given value=%d is not found in your array",x);
  }
  else{
    printf("your given value=%d is founded in your array and its index is %d",x,index);
  }

  printf("\n");
  return 0;
}