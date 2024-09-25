#include<stdio.h>
int main(){
int a;
int b;
int c;
int ecount=0;
int ocount=0;
for(int i=1;i<=5;i++){
    scanf("%d",&a);
    if(a%2==0){
        ecount=ecount+1;
    }
    else {
        ocount=ocount+1;
    }

    /*rintf("%d x %d = %d\t",a,i,a*i);
    printf("%d x %d = %d\t",b,i,b*i);
    printf("%d x %d = %d\t",c,i,c*i);
    printf("\n");*/

}
printf("count of even number= %d\n",ecount);
printf("count of odd number= %d",ocount);
}
