#include<stdio.h>
int main(){

    float x;
    printf ("Enter the number : ");
    scanf("%f",&x);

    int y;
    y=x;

    float z = x - y ;
    printf("Factorial Of %f is %.4f \n",x,z);

    return 0;
}