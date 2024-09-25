#include<stdio.h>
int main(){
int rent=1000;
int i=9;
do{
int incr=(rent*10/100)+rent; //1331
rent=incr;
printf("after increment rent= %d\n",incr); //1100
i++; //1
}while(i<9);
}
