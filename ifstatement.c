#include<stdio.h>
int  main()
{
    float num=96.3;
    int r=num;
    int p=(num-r)*10;

    if(p>=5)
    {
        r=r+1;
        printf("%d",r);
    }
    else
    {
        printf("%d",r);
    }


}
