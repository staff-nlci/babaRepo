#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
void reverseArray(int arr[],int size)
{
    int s = 0 ;
    int l= size-1;
    while(s<l)
    {
        int a = arr[s];
        arr[s]=arr[l];
        arr[l]=a;
        s++;
        l--;
    }

}

int main()
{
    int size;
    printf("Enter the size of an array: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    reverseArray(arr,size);
    printf("\n after reversed an array");
    for(int i=0;i<size;i++)
    {
        printf("\n%d",arr[i]);
    }
    return  0;
}
