#include<stdio.h>
int main()
{
    int weeks;
    printf("%d",weeks);
    scanf("%d",weeks);
    if(weeks=0){
        printf("sunday");
    }
    else if(weeks=1){
        printf("monday");
    }
    else if(weeks=2){
        printf("teusday");
    }
    else if(weeks=3){
        printf("wednesday");
    }
    else if(weeks=4){
        printf("thrusday");
    }
    else if(weeks=5){
        printf("friday");
    }
    else if(weeks=6){
        printf("saturday");
    }
    else{
        printf("not found");
    }
}
