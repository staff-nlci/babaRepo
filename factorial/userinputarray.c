#include<stdio.h>
int main(){
int marks[5]={};
/*marks[0]=45;
marks[1]=55;
marks[2]=40;
marks[3]=80;
marks[4]=90;*/
for(int i=0;i<5;i++){
printf("enter your array value = ");
scanf("%d",&marks[i]);
}
for(int j=4;j>=0;j--){
 printf("your values = %d\n",marks[j]);
}





}
