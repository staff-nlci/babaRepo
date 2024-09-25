#include<stdio.h>
int main(){
int a[7]={};
int b[8]={};
int count=0;
for(int i=0;i<7;i++){
scanf("%d",&a[i]);
    if(a[i]%2==0)
    b[i]=a[i];
    count++;

}
for(int j=0;j<count;j++){
    printf("another array=%d\t",b[j]);
}

}
