#include<stdio.h>
int main(){
int a[5]={};
float esum=0;
float osum=0;
for(int i=0;i<5;i++){
scanf("%d",&a[i]);
printf("a[%d]=%d\n",i,a[i]);
if(a[i]%2==0)
esum=(esum+a[i]);
else
osum=(osum+a[i]);
}
printf("even = %f\n odd = %f",esum/4,osum/4);
return 0;
}
