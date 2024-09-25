#include<stdio.h>
int main(){

/*while(i<5){
    printf("nlci\n");
    i++;
}
printf("end");*/
/*do{
    printf("nlci\n");
    i++;

}while(i<5);*/
int sum=0;
int num;
int per;
for(int i=0;i<5;i++){
    printf("enter number=");
    scanf("%d",&num);
    sum=sum+num;
}
per=(sum*100/500);

printf("sum=%d",sum);

}
