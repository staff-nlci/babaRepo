#include<stdio.h>
int main(){
int i=0;
int stop=5;
int sum=0;
int num;
/*printf("enter your start number =");
scanf("%d",&start);
printf("enter your loop stop number =");
scanf("%d",&stop);*/
while(i<stop){
    printf("enter your marks ");
    scanf("%d",&num);
   // printf("%d\n",i);
    sum=sum+num;
    i++;
}
int per;
printf("%d\n",sum);
per=(sum*100/500);
printf("per=%d",per);
if(per>=33){
    printf("pass");
}
else
{
    printf("fail");
}

}
