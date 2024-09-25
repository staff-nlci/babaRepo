#include<stdio.h>
int main(){
int a;
scanf("%d",&a); //435
int last_digit=a%10; //5
printf("last digit=%d\n",last_digit);
int x=a/10; //43
last_digit=x%10; //3
printf("second last digit =%d\n",last_digit); //3
x=x/10; //4
printf("third last digit=%d\n",x);







}
