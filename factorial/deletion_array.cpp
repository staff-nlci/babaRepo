#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
//   int LA[] = {1,4,3};
//   int n = 3;
//   int i;
//   printf("The original array elements are :\n");
//   for(i = 0; i<n; i++)
//    {
//     printf("LA[%d] = %d \n", i, LA[i]);
//    }
//   for(i = 1; i<n; i++) {
//      LA[i] = LA[i+1];
//      n = n - 1;
//   }
//   printf("The array elements after deletion :\n");
//   for(i = 0; i<n; i++)
//      printf("LA[%d] = %d \n", i, LA[i]);
//
//
////      update
int index=3;
int a[] = {1,4,3};
int size=sizeof(a)/sizeof(a[0]);
    for(int i =0; i<size;i++)
    {
        if(i==index-1)
        {
            a[i]=5;
        }
    }
     for(int i =0; i<3;i++)
        cout<<a[i]<<endl;
return 0;}
