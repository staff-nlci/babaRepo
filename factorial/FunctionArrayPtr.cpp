#include<stdio.h>
#include <iostream>
using namespace std;

int add (int a, int b)
{ return a+b; }

int sub(int a , int b)
{ return a-b; }

int mul(int a , int b)
{ return a*b; }

int main()
{   int x,y;
    int (*ptrFn[])(int , int) = {&add,&sub,&mul};
    int Size = sizeof(ptrFn)/sizeof(ptrFn[0]);
   for(int i=0;i<Size;i++)
    {
        printf("\n enter value: ");
        scanf("%d %d",&x,&y);
     printf("result = %d",ptrFn[i](x,y));
   }

    return 0;
}
