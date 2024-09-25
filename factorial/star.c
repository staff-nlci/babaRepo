#include<stdio.h>
int main(){
for(int i=1;i<8;i++){

    for(int k=0;k<i-1;k++){
    printf(" ");
        }
    for(int j=8;j>i;j--)
    {
    printf(" *");
    }

    printf("\n");
}
}



