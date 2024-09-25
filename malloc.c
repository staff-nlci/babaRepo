#include<stdio.h>
int main(){
int a,*ptr,num,sum=0,re;
printf("enter value of a = ");
scanf("%d",&a);
printf("enter value of num = ");
scanf("%d",&num);
ptr=(int*)calloc(num,sizeof(int));//3*4
if(ptr==NULL){
    printf("there are some problem in ptr");
    exit(0);
}

printf("enter values\n");
for(int i=0;i<num;i++){
    scanf("%d",ptr+i);
    sum=sum+*(ptr+i);

}
printf("sum = %d\n",sum);
for(int i=0;i<num;i++){
    printf("value of ptr = %d\n",*(ptr+i));

}
//free(ptr);
printf("enter rellocate value = ");
scanf("%d",&re);
sum=0;
ptr=(int*)realloc(ptr,re*sizeof(int));//3*4
printf("enter values after free ptr\n");
for(int i=0;i<re;i++){
    scanf("%d",ptr+i);
    sum=sum+*(ptr+i);
}
for(int i=0;i<re;i++){
    printf("value of ptr = %d\n",*(ptr+i));

}
}
