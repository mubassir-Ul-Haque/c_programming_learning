#include<stdio.h>
int main(){
    int n;
    printf("enter the number of times you want to print 'hello'  :  ");
    scanf("%d",&n);

    for(int i = 1;i<=n;i++){
        printf("hello\n");
    }
    return 0;
}