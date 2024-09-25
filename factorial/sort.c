#include<stdio.h>


int main(){

int a[3]={12,5,8};
int b[3];
int temp=a[0];
for (int i = 1; i < 3; i++) {
        if (a[i] < temp) {
            temp = a[i];
            b[i] = temp;
            printf("%d",b[i]);
        }

    }
printf("%d\n",temp);
/*for(int i=0;i<3;i++){
    printf("%d\t",b[i]);
}*/

}



