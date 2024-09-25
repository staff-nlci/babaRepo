#include<stdio.h>
int main()
{
    int year=2022;
    printf("%d",year);
    if((year%4==0) &&(year%100)!=0)
    {
    printf("year+1");
    }
}
