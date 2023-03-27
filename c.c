#include<stdio.h>
float SquareArea (float side);
float CircleArea (float rad);
float RectangleArea (float a,float b);

int main() {
   float a=6.0;
   float b=8.0;
   printf("AREA OF RECTANGLE=%f",RectangleArea(a,b));
   float rad=9.0;
   printf("THE AREA OF CIRCLE=%f",CircleArea(rad));
float side=5.0;
printf("ARAE OF SQUARE=%f",SquareArea(side));
    
    
   
    return 0;
}
float SquareArea(float side){
    return side*side;
}
float CircleArea (float rad){
    return 3.14*rad*rad;
}
float RectangleArea (float a,float b){
    return a*b;
}
