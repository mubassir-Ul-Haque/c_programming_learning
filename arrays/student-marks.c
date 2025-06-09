#include<stdio.h>
int main(){
    int x;
    printf("enter number of total student : ");
    scanf("%d",&x);
    int marks[x];
    for(int i=0;i<=x-1;i++){
        printf("enter marks of roll no %d :",i+1);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<=x;i++){
        if(marks[i]<=35){
            printf("roll no %d is failed by %d\n",i+1,marks[i]);
        }
        else printf("roll no %d is passed by %d\n",i+1,marks[i]);
    }

    return 0;
}