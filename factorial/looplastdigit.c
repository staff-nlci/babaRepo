#include<stdio.h>
int main(){
int num;
printf("enter your number =");
scanf("%d",&num);
int sum=0;
for(int i=0;i<10;i++){
    int l=num%10; //4
    printf("l=%d\n",l);
    sum=sum+l;
    int d=num/10; //0
    num =d;//0
}
printf("sum=%d",sum);

}
