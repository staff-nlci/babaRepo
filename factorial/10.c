#include<stdio.h>
int main(){
    int num;
    int a[10];
    int esum=0;
    int osum=0;
    int count=0;
    for(int i=0;i<10;i++){
        scanf("%d",&num);
        if(num%2==0){
            a[count]=num;
            count++;
            esum=esum+a[count];
        }

        else{
            a[count]=num;
            count++;
             osum=osum+a[count];
        }
    }

    for(i=0;i<count;i++){
        printf("even=%d\t",a[i]);
        printf("odd =%d\t",a[i]);

    }

}


