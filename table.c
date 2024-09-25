#include<stdio.h>
void main(){

/*int lastdigit=num%10; //5
int firstdigit=num/10; //4
printf("firstdigit=%d\n",firstdigit);
printf("lastdigit=%d\n",lastdigit);
int sum=firstdigit+lastdigit;
printf("sum=%d",sum);*/
/*int num;
int sum=0;
int i=0;
while(i<5){
    printf("enter your value =");
    scanf("%d",&num);
    sum=sum+num; //11
    i++;//2
}
printf("%d",sum);*/
int num;
printf("enter your value");
scanf("%d",&num); //5
int i=1;    //1
int fact=1;
while(i<num) //1<1
{
  fact=fact*num; //20
    num--; //3
       //3
}
printf("factorial=%d",fact);





}

