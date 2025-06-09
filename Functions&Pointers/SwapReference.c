#include<stdio.h>
void swap(int* a,int* b){
    int temp;
     temp = *a;
     *a=*b;
     *b=temp;
    return;
}
int main(){
    int a =3;
    int b =4;
    swap(&a,&b);
    printf("a=%d\nb=%d\n",a,b);
}

