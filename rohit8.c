#include<stdio.h>
int main()
{
    int age;
    int countrycode;
    scanf("%d %d",&age,&countrycode);
    if(age>=18)
    {
        if(countrycode==1){
            printf("india");
        }
        else{
            printf("canada");
        }
    }
    else{
        printf("not eligible");
    }
}
