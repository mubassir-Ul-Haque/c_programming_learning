#include<stdio.h>
int main(){
int n;
printf("enter the year :  ");
scanf("%d",&n);

if(n%4==0){
    printf("leap year!!!!\n");
} else{
    printf("normal year\n");
}

    return 0 ;
}