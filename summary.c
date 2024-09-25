#include<stdio.h>
int main(){
int price;
printf("enter your price = ");
scanf("%d",&price);
int quantity;
printf("enter your quantity = ");
scanf("%d",&quantity);
long intrest;
intrest=((price*quantity)*10)/100;
printf("intrest=%ld",intrest);

}
