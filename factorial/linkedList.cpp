#include<stdio.h>
#include<iostream>
using namespace std;
struct node
{
    int data;
    node *tail;
};
node display(node *n1)
{
    node *temp=n1;
    int c=1;
    while(temp != nullptr )
    {
        printf("data %d\t %d\n",c,temp->data);
        temp=temp->tail;
        c++;
    }
}
int main()
{
    struct node d1,d2,d3,d4;
//    d1.data= 5;
//    d1.tail = &d2;
//    d1.tail->data = 10;
//    d1.tail->tail = &d3;
//    d2.tail->data=15;
//    d2.tail->tail=&d4;
//    d4.data=20;
//    d4.tail=NULL;
    createLinkedList(d1);
    createLinkedList(d2);
    createLinkedList(d3);
    display(&d1);
        return 0;
}
