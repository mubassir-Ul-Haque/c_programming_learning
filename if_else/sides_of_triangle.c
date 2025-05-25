#include<stdio.h>
int main(){
int a,b,c;
printf("Enter 1st side length :  ");
scanf("%d",&a);
printf("Enter 2nd side length :  ");
scanf("%d",&b);
printf("Enter 3rd side length :  ");
scanf("%d",&c);

if((a+b)>c&&(a+c)>b&&(b+c)>a){
    printf("valid triangle");
}else{
    printf("invlaid triangle");
}
return 0;
}