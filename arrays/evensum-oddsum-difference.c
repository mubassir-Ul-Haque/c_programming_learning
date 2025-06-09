#include <stdio.h>
int main() {
  int x;
  int sumOdd = 0;
  int sumEven = 0;
  printf("enter size of array : ");
  scanf("%d", &x);
  int arr[x];
  for (int i = 0; i <= x - 1; i++) {
    printf("enter value of element %d :", i + 1);
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i <= x - 1; i++) {
    if (arr[i] % 2 == 0) {
      sumEven = sumEven + arr[i];
    } else {
      sumOdd = sumOdd + arr[i];
    }
  }
  for(int i=0;i<=x-1;i++){
    printf("%d  ",arr[i]);
  }
  if (sumEven>sumOdd){
    int difference = sumEven-sumOdd;
    printf("\n%d",difference);
  }else {
     int difference = sumOdd-sumEven;
    printf("\n%d\n",difference);
  }
  return 0;
}