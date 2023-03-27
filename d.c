#include<stdio.h>
void swap(int a,int b);
void _swap(int* a,int* b);
int main(){
    int x=8,y=5;
    swap(x,y);
    printf("x=%d y=%d",x,y);
     _swap(&x,&y);
    printf("x=%d y=%d",x,y);
    return 0;
}
void swap(int a,int b){
    int t=a;
    a=b;
    b=t;

    printf("a=%d and b=%d \n",a,b);
}
void _swap(int* a,int* b){
    int t=*a;
    *a=*b;
    *b=t;
    printf("a=%d b=%d",*a,*b);
    }