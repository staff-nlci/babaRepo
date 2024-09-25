#include<stdio.h>
int main()
{
    int att;
    printf("enter your attendance");
    scanf("%d",&att);

    if(att>=30){
        printf("10000\n");
    }
    else if(att>25)
    {
      printf("8000\n");

    }
     else if(att>20)
    {
      printf("5000\n");

    }
    else{
        printf("2000\n");
    }
printf("end");
}
