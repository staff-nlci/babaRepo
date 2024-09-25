#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct node {
    int data;
    node *next;
};
//node* head = NULL;
//void push(int value)
//{
//    node *t = head;
//    while(t==nullptr)
//    {
//        t=t->next;
//    }
//    t->next = (node*)malloc(sizeof(node));
//    t->next->data=value;
//    t->next->next = NULL;
//}
//void display()
//{
//    if (head==NULL)
//    {
//        cout<<"List is empty\n";
//        return;
//    }
//    node*t;
//    t=head;
//    while(t!=nullptr)
//    {
//        cout<<t->data<<endl;
//        t=t->next;
//    }
//}
void display(node *n)
{
    node * temp = n;
    while(temp!=nullptr)
    {
        printf("%d",temp->data);
        temp= temp->next;
    }

}
void createLinkedList(node *n)
{
    char c;

    node *t = n;
    printf("Enter data:");
    scanf("%d",&t->data);
    printf("want next type (y) otherwise (n): ");

     t->next = NULL;
     while(t == nullptr)
     {
         t=(node*)malloc(sizeof(node));
         if(c=='y')
            createLinkedList(t);
         t->next = NULL;
         break;
     }
}
int main()
{
    struct node d1;
createLinkedList(&d1);
display(&d1);
    return 0;
}

