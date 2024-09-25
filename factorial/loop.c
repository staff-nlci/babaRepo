#include<stdio.h>
int main(){
int a[]={4,1,2,5,2,8,4,1,2,5,-1,5,6};
int e[]={};
int c=0;
for(int i=0;i<sizeof(a);i++){
   if(a[i]%2==0){
       e[c]=a[i];
       c++;
   }
else
{
    if(a[i]<0)
    {
        break;
    }
}
}
for(int j=0;j<c;j++){
    printf("%d\t",e[j]);

}
 printf("%d",sizeof(a));
}
