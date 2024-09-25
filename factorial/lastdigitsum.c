#include<stdio.h>
int main(){
//789 9,8,7
int num;
printf("enter your digit=");
scanf("%d",&num);
int lastdigit=num%10;
printf("lastdigit =%d\n",lastdigit); //6
int d=num/10; //45
int slastdigit=d%10; //5
printf("slastdigit =%d\n",slastdigit);
int e=d/10; //4
printf("e=%d\n",e);
int sum=lastdigit+slastdigit+e;
printf("sum=%d",sum);



}
