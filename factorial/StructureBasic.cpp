#include<stdio.h>
#include <iostream>
using namespace std;
struct person{
    char name[7] ="sumit";
    int age=20;
};
int main()
{
    struct person p1;
//    p1.name = "vishal"; ye kam nahi karna hai
//    printf("name = %s\n",p1.name);
//    printf("age = %d",p1.age);
cout<<p1.name<<endl;
cout<<p1.age;
    return 0;
}
