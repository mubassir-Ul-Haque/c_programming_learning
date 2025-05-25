#include<stdio.h>
int main(){
int a,b,c;
printf("Enter 1st boy age :  ");
scanf("%d",&a);
printf("Enter 2nd boy age :  ");
scanf("%d",&b);
printf("Enter 3rd boy age :  ");
scanf("%d",&c);

if(a>b && a>c){
    printf("first boy is youngest");
}else if(b>a && b>c){
    printf("second boy is youngest");
}else{
    printf("third boy is youngest");
}
return 0;
}