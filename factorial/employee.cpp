#include<stdio.h>
#include<iostream>
using namespace std;

struct employee{
void name(){
    char name[30];
    scanf("%s",name);
    printf("name = %s",name);
}
void age(){
 int age;
 scanf("%d",&age);
 printf("age = %d\n",age);
}
};

int main(){
struct employee p1;
//void(*ptrFn[])()={p1.name(),p1.age()};
//printf("%s",ptrFn[0]());
 p1.name();
 p1.age();



return 0;
}
