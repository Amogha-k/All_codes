// 
#include<iostream> 
using namespace std; 

class Node
{
    public:
    int data;
    Node* next;
    Node(int d)
    {
        data=d;
        next=NULL;
    }
};
class Linkedlist
{
   // private:
    public:
    Node *head;
    void create(int *A, int n)
    {
        head = new Node(A[0]);

        Node *temp;
        Node *last;
        last = head;
        // Create a Linked List
        for (int i = 1; i < n; i++)
        {

            // Create a temporary Node
            temp = new Node(A[i]);

            // last's next is pointing to temp
            last->next = temp;
            last = temp;
        }
    }
    void display()
    { 
       Node *p=head;
        while(p!=nullptr)
        {
            cout<<p->data;
            p=p->next;
        if(p)
        cout<<"<--";
        }
        cout<<endl;
    }
   void insert(int pos,int data)
    {
       Node *p=head;
        Node *t;
        if(pos==0)
        {
            t=new Node(data);
            t->next=head;
            head=t;

        }
        else if(pos>0)
        {
            p=head;
            for(int i=0;i<pos-1 && p;i++)
            {
                p=p->next;
            }
            if(p)
            {
                t=new Node(data);
                t->next=p->next;
                p->next=t;
            }
        }
       // return p;
    }
    void insert_end(int x)
    {
        Node *p=head;
        Node *last;
        Node *t=new Node(x);
        if(head ==NULL)
        {
            head=last=t;
        }
       else{
        last->next=t;
        last=t;
       }

    }

    
};
int main() 
{ 
    Linkedlist l;
    int A[]={8,10,3,97,7};
    int n=sizeof(A)/sizeof(A[0]);
    l.create(A,n);
    l.display();
    l.insert(2,99);
    l.display();
    l.insert(6,100);
    l.display();
    l.insert_end(3);
    l.display();

    return 0 ;
}