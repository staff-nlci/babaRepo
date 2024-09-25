#include<stdio.h>
void main()
{
    int num[10]={2,5,4,6,2,1,9,12,8,-1};
    int even[]={};
    int c=0;
    int i =0;
   for(;i<10;i++){
    if(!(num[i]%2==0)){
        if(num[i]<0)
            break;

//        i++;
    }
    else
   {
       even[c]=num[i];
    c=c+1;
//    i++;
   }

   }
    for(int i=0;i<c;i++)
    {
        printf("%d\n",even[i]);
    }

}
