#include<stdio.h>
 int main (){
     int n;
     printf ("Enter a number : ");
    scanf("%d",&n);
     // ternary operator
     n%2==0?printf("Even number"):printf("Odd number");
     return 0;
 }