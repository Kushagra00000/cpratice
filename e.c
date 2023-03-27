#include<stdio.h>
void somethings(int *arr,int n);
int main(){
    int arr[]={1,2,3,4,5,6};
    somethings(arr,6);
    return 0;
}

void somethings(int* arr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d is the changed and that  \t",arr[i]);
    }
    printf("\n");
    }