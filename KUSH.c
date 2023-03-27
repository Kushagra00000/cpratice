//ENTERING A NUMBER
#include<stdio.h>

int main() {
    int n;
    printf("enter no");
    scanf("%d",&n);
    printf("the no is %d",n);
    return 0;
} 

//SUM OF TWO NUMBERS
#include <stdio.h>

int main() {
    // Write C code here
   int a,b,sum;
   printf("enter a");
   scanf("%d",&a);
   printf("enter b");
   scanf("%d",&b);
   sum=a+b;
   printf("sum of a and b= %d \n",sum);
    return 0;
}

// area of a square
#include <stdio.h>

int main() {
   int side;
   printf("enter side");
   scanf("%d",&side);
   printf("AREA OF THE SQUARE = %d",side*side);
    return 0;
}

 // area of a cirle
#include <stdio.h>

int main() {
   float radius;
   printf("enter radius");
   scanf("%f",&radius);
   float area=3.14*radius*radius;
   printf("AREA OF CIRCLE= %f",area);
    return 0;
}

// perimeter of a rectangle
#include <stdio.h>

int main() {
   int a,b;
   printf("enter a");
   scanf("%d",&a);
   printf("enter b");
   scanf("%d",&b);
  printf("PERIMETER OF A RECTANGLE= %d",(2*a+2*b));
  
    return 0;
}

// CUBE OF A NUMBER
#include <stdio.h>

int main() {
   int n;
   printf("enter n");
   scanf("%d",&n);
  printf("CUBE OF n= %d",(n*n*n));
  
    return 0;
}


// to check if the no is divisible by 2 or not

#include <stdio.h>

int main() {
    // Write C code here
int num;
printf("ENTER NUMBER0");
 scanf("%d", &num);
 printf("%d",num%2==0);
    return 0;
}

//if a number is greater than 9 and less than 100

#include <stdio.h>

int main() {
    // Write C code here
int num;
printf("ENTER NUMBER0");
 scanf("%d", &num);
printf("%d",num>=9 && num<=100);/
    return 0;
}
// average of three numbers

#include <stdio.h>

int main() {
    
    int a,b,c;
    printf("ENTER a");
    scanf("%d", &a);
    printf("ENTER b");
    scanf("%d",&b);
    printf("ENTER c");
    scanf("%d",&c);
    printf("AVERAGE OF a,b and c= %d",((a+b+c)/3));
    return 0;
 }

 #include <stdio.h>
#include <ctype.h>

int main() {
    // Write C code here
char a;
printf("ENTER a");
 scanf("%c", &a);
 if (a>='0' && a<='9')
 {
printf("CHARACTER IS A DIGIT %c",a);
}
else
{
    printf("character is not a digit %c",a);
}
    return 0;
}


// TO TAKE REVERSE OF A NUMBER
#include <stdio.h>
int main() {
  int n,reverse=0, rem;    
printf("Enter a number: ");    
  scanf("%d", &n);    
  while(n!=0)    
  {    
     rem=n%10;    
     reverse=reverse*10+rem;    
     n/=10;    
  }    
} 


// TO check armstrong NUMBER
#include <stdio.h>
int main() {
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
       // remainder contains the last digit
        remainder = originalNum % 10;
        
       result += remainder * remainder * remainder;
        
       // removing last digit from the orignal number
       originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
