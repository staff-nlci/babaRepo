#include <stdio.h>
#include <iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}

int main()
{
    int a[]={3,4,5};
    int size = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<10;i++)
    {
        a[i]=5;

    }
    int s= sizeof(a)/sizeof(a[0]);
    cout<<s<<endl;
//   int num = 5;
//    int arr[] = {3,5,9,5,34,4};
//    for(int i=0;i<6;i++)
//    {
//        if(arr[i]==num)
//        {
//            printf("value= %d is present at %d \n",arr[i],i);
//        }
//        cout<<arr[i]<<endl;
//    }

}
