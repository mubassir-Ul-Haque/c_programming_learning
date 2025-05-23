#include<stdio.h>
int main(){
int a , b;
printf("Make sure your first number is greater than second number\n");

printf("Enter Dividend : ");
scanf("%d",&a);

printf("Enter devisor : ");
scanf("%d",&b);

int quotient;
quotient=a/b;

int remaInder;
remaInder=a-(b*quotient);

printf("The Remainder when %d is divided by %d is : %d", a , b, remaInder);

printf("\n");

    return 0;
}