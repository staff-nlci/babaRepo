using namespace std;
#include <iostream>
#include <stdlib.h>
struct node
{
    int data;
    node *next;
};
node *head=NULL;
void push_at_begin(int value)
{
    node *t;
    t = (node*)malloc(sizeof(node));
    t->data = value;
    t->next = head;
    head=t;
}
void print_list()
{
    if (head==NULL)
    {
        cout<<"List is empty\n";
        return;
    }
    node*t;
    t=head;
    while(t!=NULL)
    {
        cout<<t->data<<endl;
        t=t->next;
    }
}
void push_at_end(int value)
{
    node*t = head;
    while(t->next!=NULL)
    {
        t=t->next;
    }
    t->next = (node*)malloc(sizeof(node));
    t->next->data=value;
    t->next->next = NULL;
}
void pop_at_begin()
{
	if (head==NULL)
	{ cout<<"List is empty\n"; return;}
    node *t;
    t=head;
    cout<<t->data<<endl;
    head=t->next;
    free(t);
}
int main()
{
    print_list();
    push_at_begin(26);
    push_at_begin(29);
    push_at_begin(36);
    push_at_end(60);
    print_list();
    cout<<"---\n";
    pop_at_begin();
    cout<<"---\n";
    print_list();
}

