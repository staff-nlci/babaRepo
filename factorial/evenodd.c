#include<stdio.h>
int main(){
int a[5]={4,1,2,5,3};
int b[5]={8,5,1,2,5};
int c[10]={};
int count=0;
for(int i=0;i<9;i++){

    if(i!=5){
        c[i]=b[i];
        //printf("%d\t",c[i]);
    }
    else{
    c[i]=a[count];
    //printf("c=%d\t",count);
    count++;
    }
}
for(int j=0;j<10;j++){
    printf("%d\n",c[j]);
}
}
