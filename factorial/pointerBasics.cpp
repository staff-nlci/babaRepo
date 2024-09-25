#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int *i,num=5,**j;
    i=&num;
    j=&i;
//    printf("%d\n",i); //address of num
//    printf("%d\n",*i); // 5 value of num
//    printf("%d\n",*j);//address of num
//    printf("%d\n",**j);// 5
//    printf("%d\n",j);// address of i

    int myArray[]={89,2,5,4,8,7,8,4};
     for(int i =0;i<20;i++)
        printf("%d\n",myArray[i]);

    printf("%d\n",*(myArray)) ;// address of 1st value
    int a=3,b=8,c=9,d=10;
    int *arrPtr[]={&a,&b,&c,&d};
cout<<"start ptr value"<<endl;
//    for(int i =0;i<20;i++)
//        printf("%d\n",*arrPtr[i]);

cout<<"String playing "<<endl;
    char str[3][10]={"sunday","monday","tuesday"};
   for(int i=0;i<3;i++) {
    for(int j=0;j<10;j++) {
        printf("%c",str[i][j]);
         }
   }
   char *strr[3]={"sunday","monday","tuesday"};
   cout<<endl;
    for (int i = 0; i < 3; i++) {
        printf("%s\n", strr[i]);
    }
    return 0;
}


