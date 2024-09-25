#include<stdio.h>
#include<iostream>
using namespace std;
void greet(){
printf("good morning\n");
}
int add(int a,int b )
{
    return a+b;
}
int sub(int a,int b )
{
    return a-b;
}
int multi(int a,int b )
{
    return a*b;
}
//void swapValue(int *a , int *b)
//{
//    int temp;
//    temp=*a;
//    *a=*b;
//    *b=temp;
//    printf("In swapFn \n%d\t %d\t ",*a,*b);
//}
int main()
{
    void (*greet_ptr)(void) = &greet;
    greet_ptr();

    int (*addPtr)(int , int) = add;
    int result = addPtr(4,5);
    printf("%d",result);
//    int a[10]={10,20,30,40,50};
//    for(int i=0;i<10;i++)
//    printf("%d\t",*(a+i));
//int x=4,y=5;
//    swapValue(&x,&y);
//    printf("\nafter swap");
//    printf("\n %d\t %d\t",x,y);

    return 0;
}
