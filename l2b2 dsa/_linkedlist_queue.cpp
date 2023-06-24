#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
class queue
{
    node *front, *rear;

public:
    queue()
    {
        front = NULL;
        rear = NULL;
    }
    int enqueue(int val)
    {
        node *newnode = new node();
        newnode->data = val;
        newnode->next = NULL;
        if (front == NULL && rear == NULL)
            front = rear = newnode;
        else
        {
            rear->next = newnode;
            rear = newnode;
        }
    }
    void dequeue()
    {
       if(front==NULL)
       cout<<"que is empty"<<endl;
       else{
        cout<<"dequeued element "<<front->data<<endl;
        node *temp=front;
        front=front->next;
        if(front==NULL)
        rear=NULL;
        delete temp;

       }
    }
};
int main()
{
    queue list;

    list.dequeue();

    cout<<"Enqueuing element: "<<10<<endl;
    list.enqueue(10);
    cout<<"Enqueuing element: "<<20<<endl;
    list.enqueue(20);
    cout<<"Enqueuing element: "<<30<<endl;
    list.enqueue(30);

    list.dequeue();
    list.dequeue();
    list.dequeue();
    list.dequeue();

    return 0;
}


