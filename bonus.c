#include<stdio.h>
int main()
{
    int bonus;
    printf("%d",bonus);
    scanf("%d",&bonus);
    if(bonus>=5000)
      {
          printf("superwiser");
      }
      else if(bonus>=4000){
        printf("manager");
      }
      else if(bonus>=3000){
        printf("clerek");
      }
      else{
        printf("poen");
      }
}
