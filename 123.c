#include<stdio.h>
int main(){
int rent;
scanf("%d",&rent);
int i=10;
//1
printf("first term=%d\n",rent);
i=rent*i/100;
rent=rent+i;
//2
printf("second term=%d\n",rent);
i=(rent*10)/100;
rent=rent+i;
//3
printf("third term=%d\n",rent);
i=(rent*10)/100;
rent=rent+i;
//4
printf("forth term =%d\n",rent);



}
