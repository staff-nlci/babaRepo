#include<stdio.h>
int main(){
//printf("kavita\nkavita\nkavita\nkavita\nkavita\nkavita");
int i;
scanf("%d",&i);
int j;
scanf("%d",&j);
kavita:
    printf("%d\t",i);
    i=i++;
        if(i>=j){
            goto kavita;
        }
}
