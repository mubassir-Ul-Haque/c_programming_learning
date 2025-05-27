#include<stdio.h>
int main(){
    int n;
    printf("enter a number :  ");
    scanf("%d",&n);
    int x=n;
    int sum= 0;
    while(n>0){
        sum=sum+(n%10);
        n=n/10;
    }   
    printf("sum of the digit of %d is %d",x,sum);
     return 0;
}