#include <iostream>
using namespace std;
class node
{public:
    int data;
    node *next;
};
class stack
{
    node *head;

public:
    stack()
    {
        head = NULL;
    }
    void push(int val)
    {
        node *newnode=new node();
        newnode->data=val;
        newnode->next=head;
        head=newnode;
    }
    void pop()
    {
        if(head==NULL)
        cout<<"stack is empty"<<endl;
    else{
        cout<<"poped element"<<head->data<<endl;
        head=head->next;
    }
    }
};
int main()
{
    stack list;

    list.pop();

    cout<<"Pushing element: "<<10<<endl;
    list.push(10);
    cout<<"Pushing element: "<<20<<endl;
    list.push(20);
    cout<<"Pushing element: "<<30<<endl;
    list.push(30);

    list.pop();
    list.pop();
    list.pop();
    list.pop();

    return 0;
}

