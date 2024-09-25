#include<stdio.h>
int main()
{
int i,j;
int plus;
//printf("enter your addition value =");
//scanf("%d",&plus);
printf("enter your start number = ");
scanf("%d",&i);
printf("enter your stop number = ");
scanf("%d",&j);

while(i<=j){
   // printf("i=%d\n",i);
    if(i%2==0){
        printf("even number =%d\n",i);
    }
    else
    {
        printf("odd number =%d\n",i);
    }
     i++;
    }
   // printf("after addition = %d\n",i+plus);

}









