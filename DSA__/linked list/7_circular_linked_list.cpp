//
#include <iostream>
using namespace std;
// node
class Node
{
public:
    int data;

    Node *next; // self
    Node(int data)
    {
        this->data = data;
    }
};
// circular linked list
class Circular_Linked_list
{
private:
    Node *head, *last;
    Node *p, *q;
    int count;

public:
    Node *get_head()
    {
        return head;
    }
    void create(int a[], int n)
    {
        int i = 0;
        Node *t;
        head = new Node(a[i]);
        head->next = head;
        last = head;
        for (i = 1; i < n; i++)
        {
            t = new Node(a[i]);
            t->next = last->next;
            last->next = t;
            last = t;
        }
        display();
    }
    void display()
    {
        count = 0;
        p = head;
        do
        {
            count++;
            cout << p->data;

            p = p->next;
            if (p != head)
                cout << "<--";
        } while (p != head);
        cout << endl;
    }
    void display_recursive(Node *x)
    {
        static int flag = 0;
        if (x != head || flag == 0)
        {
            flag = 1;
            cout << x->data << "<--";
            display_recursive(x->next);
        }
        flag = 0;
    }
    void insert(int pos, int val)
    {
        Node *t;
        int i;
        if (pos == 0)
        {
            t = new Node(val);
            // check if it is first node
            if (head == NULL)
            {
                head = t;
                head->next == head; // circular linked list
            }
            else
            {
                p = head;
                while (p->next != head)
                {
                    p = p->next;
                }
                p->next = t;
                t->next = head;
                head = t;
            }
        }
        else
        {
            if (pos > 0 && pos < count)
            {
                p = head;
                for (i = 0; i < pos - 1; i++)
                {
                    p = p->next;
                }
                t = new Node(val);
                t->next = p->next;
                p->next = t;
            }
        }
        cout << endl;
        display();
    }
    int deletee(int pos)
    {
        int x;
        if (pos > 0 && pos < count)
        {
            // deleting the first head node
            if (pos == 1)
            {
                p = head;
                while (p->next != NULL)
                {
                    p = p->next;
                }
                x = head->data;
                if (head == NULL)
                {
                    delete head;
                    head = NULL;
                }
                else
                {
                    p->next = head->next;
                    delete head;
                    head = p->next;
                }
            }
            // deleting at given position
            else
            {
                p = head;
                for (int i = 0; i < pos - 2; i++)
                {
                    p = p->next;
                }
                q = p->next;
                p->next = q->next;
                x = q->data;
                delete q;
            }
        }
        display();
        return x;
    }
};

int main()
{
    Circular_Linked_list cir;
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cir.create(arr, size);
    cir.display_recursive(cir.get_head());
    cir.insert(3, 111);
    cir.deletee(4);
    return 0;
}