//
#include <iostream>
using namespace std;
class Node
{
public:
    Node *prev;
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
    }
};
class D_Linked_list
{
private:
    Node *head, *last, *p;
    int count;

public:
    void create(int a[], int n)
    {
        Node *t;
        int i = 0;
        // copying first element
        head = new Node(a[i]);
        head->next = NULL;
        head->prev = NULL;
        last = head;

        // copying all the elements of array
        for (i = 1; i < n; i++)
        {
            t = new Node(a[i]);
            t->next = last->next;
            t->prev = last;
            last->next = t;
            last = t;
        }
        display();
    }
    void display()
    {
        count = 0;
        p = head;
        while (p)
        {
            cout << p->data;
            p = p->next;

            if (p)
            {
                cout << "<--";
            }
            count++;
        }
        cout << endl;
    }
    void insert(int pos)
    {
        int data;
        p = head;
        Node *t;
        cout << "Enter the value to be inserted " << endl;
        cin >> data;
        if (pos == 0)
        {
            t = new Node(data);
            t->prev = NULL;
            t->next = head;
            head->prev = t;
            head = t;
        }
        else if (pos > 0 && pos <= count)
        {

            for (int i = 0; i < pos - 1; i++)
            {
                p = p->next;
            }
            t = new Node(data);
            t->next = p->next;
            t->prev = p;
            if (p->next)
                p->next->prev = t;
            p->next = t;
        }
        else
        {
            cout << "position is invalid" << endl;
            return;
        }
        display();
    }
    int deletee(int pos)
    {
        if (pos < 0 || pos > count)
            return -1;
        int x;
        p = head;
        if (pos == 0)
        {
            head = head->next;
            x = p->data;
            delete p;
            if (head)
            {
                head->prev = NULL;
            }
        }
        else
        {
            for (int i = 0; i < pos - 1; i++)
            {
                p = p->next;
            }
            p->prev->next = p->next; // removong the link
            if (p->next)
            {
                p->next->prev = p->prev;
            }
            x = p->data;
            delete p;
        }
        display();
    }
    void revrese()
    {
        p=head;
        Node *temp;
        while(p)
        {
            temp=p->next;
            p->next=p->prev;
            p->prev=temp;
            p=p->prev;
            if(p!=NULL && p->next==NULL)
            {
                head=p;
            }
        }
        display();
    }
};

int main()
{
    D_Linked_list dl;

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    dl.create(arr, size);
  //  dl.insert(7);
    dl.deletee(3);
    dl.revrese();

    return 0;
}