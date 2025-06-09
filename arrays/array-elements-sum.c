#include<stdio.h>
int main(){
    int x;
    int sum=0;
    printf("enter number of total student : ");
    scanf("%d",&x);
    int marks[x];
    for(int i=0;i<=x-1;i++){
        printf("enter marks of roll no %d :",i+1);
        scanf("%d",&marks[i]);
        sum=sum+marks[i];
    }
    printf("sum of all student number is %d\n",sum);

    return 0;
}