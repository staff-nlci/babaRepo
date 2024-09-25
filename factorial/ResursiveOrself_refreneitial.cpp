#include<stdio.h>
#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *tail;
};
int main()
{
    struct node n1,n2;
    n1.data =5;
    n1.tail = &n2;
    n2.data=10;
    n2.tail=NULL;
    printf("%d\n",n1.data);
    printf("%d\n",n1.tail->data);
    printf("%d\n",n1.tail->tail); //NULL
//    printf("%d\n",n2.data);

    return 0;
}
