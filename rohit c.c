#include <stdio.h>
int main()
{
    int basicpay;
    int attendence;
    int salary;
    float esi;
    int pf;
    int net;

    scanf("%d %d",&basicpay,&attendence);
    salary=(basicpay*attendence)/31;
    printf("%d\n",salary);
    if(salary>8000)
    {
        pf=(salary*12)/100;
        printf("%d",pf);
    }
    else
    {
        pf=(salary*10)/100;
        printf("%d",pf);
    }




    /*esi=(salary*1.75)/100;
    printf("%f\n",esi);
    pf=(salary*12)/100;
    printf("%d\n",pf);*/


}
