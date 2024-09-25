#include<stdio.h>
int main(){
int rent;
scanf("%d",&rent);
int i=10;
//1
printf("1 first term rent=%d\n",rent);
//2
i=rent*10/100;
rent=rent+i;
printf("2 second term rent=%d\n",rent);
//3
i=rent*10/100;
rent=rent+i;
printf("3 third term rent=%d\n",rent);
//4
i=rent*10/100;
rent=rent+i;
printf("4 forth term rent=%d\n",rent);
}
