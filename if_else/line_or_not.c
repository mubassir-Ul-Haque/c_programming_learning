#include<stdio.h>
int main(){
    float x1,y1,x2,y2,x3,y3;
    printf("enter 1st point coordinates:  ");
    scanf("%f%f", &x1,&y1);
    printf("enter 2nd point coordinates:  ");
    scanf("%f%f", &x2,&y2);
    printf("enter 3rd point coordinates:  ");
    scanf("%f%f", &x3,&y3);
float m1=(y2-y1)/(x2-x1);
float m2=(y3-y2)/(x3-x2);
if(m1==m2)
 printf("the points are collinear\n");
 else
 printf("the points are not collinear\n");
    return 0;
}