#include<stdio.h>
int main()
{
    int obtained_marks;
    int total_marks;
    scanf("%d %d",&obtained_marks,&total_marks);
   // printf("%d",total_marks);
    int persentage=(obtained_marks*100)/total_marks;
    printf("%d",persentage);
    if (persentage>33)
    {
        printf("pass");
    }
    else
    {
        printf("fail");
    }



}
