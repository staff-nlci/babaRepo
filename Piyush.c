#include<stdio.h>
int main()
{
    int salary = 1000;
    int hours=10;
    int total_salary=salary*hours;
    printf("%d\n",total_salary);
    if (total_salary<=15000)
    {
        int tax= total_salary*15/100;
        printf("%d\n",tax);
    }
    else
    {
        printf("%d\n",total_salary*20/100);
    }
    return 0;
}

