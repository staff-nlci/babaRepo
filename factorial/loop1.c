#include<stdio.h>
int main(){
int a;
int sum=0;
for(int i=0;i<5;i++){
scanf("%d",&a);
  if(a<=0)
  {
    printf("skip\n");
    continue;
  }
  sum=sum+a;
  printf("enter value =%d\n",a);
}
printf("sum=%d",sum);
}
