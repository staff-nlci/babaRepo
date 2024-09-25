#include<stdio.h>
struct employee{
int emploId;
char name[10];
};
struct student{
char stuName[10];
int marks[5];
};
int main(){
struct student stu1,stu2;
printf("enter your name = ");
scanf("%s",stu1.stuName);
for(int i=0;i<5;i++){
    printf("enter your marks = ");
    scanf("%d",&stu1.marks[i]);
}
printf("name = %s\n",stu1.stuName);
printf("marks");
for(int i=0;i<5;i++){
    printf("%d\t",stu1.marks[i]);
}








//struct employee empl1,empl2;
//printf("enter your id = ");
//scanf("%d",&empl1.emploId);
//printf("enter your name = ");
//scanf("%s",&empl1.name);
//printf("\nyour id = %d\nyour name = %s",empl1.emploId,empl1.name);
//printf("enter your id = ");
//scanf("%d",&empl2.emploId);
//printf("enter your name = ");
//scanf("%s",&empl2.name);
//printf("\nyour id = %d\nyour name = %s",empl2.emploId,empl2.name);
return 0;
}
