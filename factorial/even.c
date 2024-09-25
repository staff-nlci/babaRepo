#include<stdio.h>
int main()
{
    int number;
    int i=0,size = 5;
    int storeEven[size];
    int count =0;
    while(i<size)
    {
        printf("Enter even Number: ");
        scanf("%d",&number);
        if(number%2==0) {
            if(number==0)
            break;
        storeEven[i]=number;
        i++;
        count++;
    }
    else{
        printf("please Enter Only even Number:\n");
    }

}
for(int i =0;i<count;i++)
    printf("%d\n",storeEven[i]);
}
