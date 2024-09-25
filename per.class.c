#include<stdio.h>
int main()
{
    int per;
    int cls;
    printf("%d",per,cls);
    scanf("%d %d",&per,&cls);
    if(per>85){
            cls=cls+1;
        printf("class promoted %d",cls);
    }
    else
    {
        printf("not promoted");
    }
}
