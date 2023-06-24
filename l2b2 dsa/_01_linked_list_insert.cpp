#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
};
class linkedlist
{
    node *top;
    public:
    linkedlist()
    {
        top=NULL;
    }
    void addtop(int a)
    {
        node *newnode=new node();
        newnode->data=a;
        newnode->next=top;
        top=newnode;
    }
    void print()
    {
        node *temp=top;
        while(temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }

};
int main()
{
    linkedlist eee;
    eee.addtop(10);
    eee.addtop(20);
    eee.print();
}