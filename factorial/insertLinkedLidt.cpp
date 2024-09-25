#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct node {
    int data;
    node *next;
};
void display(node *n)
{
    struct node * temp = n;
    while(temp!=nullptr)
    {
        printf("%d",temp->data);
        temp= temp->next;
    }

}
void takeInput(node *n)
{
     char choice;
     n = (node*)malloc(sizeof(node));
    printf("Enter the data: ");
    scanf("%d",n->data);
    printf("want next type (y) otherwise (n): ");
    scanf("%c",&choice);
    if(choice=='y'){
    n->next= (node*)malloc(sizeof(node));
    takeInput(n->next);
    }
    else
    {
        n->next = NULL;
    }

}
int main()
{
    struct node d1;
    takeInput(&d1);
    display(&d1);
    return 0;
}
