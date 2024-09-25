#include<stdio.h>
int main(){
int amountofshopping;
int amount;
printf("enter your amount=");
scanf("%d",&amount);
int discount;
discount=(amount*10)/100;
printf("discount=%d\n",discount);

amountofshopping=amount-discount;
printf("amountofshopping=%d\n",amountofshopping);




}
