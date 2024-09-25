//nested structure two type
#include<stdio.h>
#include<string.h>
struct emp{
char name[20];
int id;
float amount;
};
int main(){
struct emp s1,*ptr;
ptr = &s1;
ptr->id=14;
strcpy(ptr->name,"nlci");
printf("id = %d\n",ptr->id);//14
printf("name = %s\n",ptr->name);
scanf("%d",&ptr->id);
printf("after user input = %d\n",ptr->id);


}
