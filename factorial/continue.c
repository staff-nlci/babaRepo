#include<stdio.h>
int main(){
int a;
int sum;
for(int i=0;i<10;i++){
        scanf("%d",&a);
    if(a%2==0){
        printf("skip\n");
     continue;
    }
    sum=sum+a;

}

printf("Enter value:-%d\n",a);
printf("sum=%d,",sum);



}
