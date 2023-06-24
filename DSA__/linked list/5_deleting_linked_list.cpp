//
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Linked_list
{
private:
    Node *p, *q;
    Node *head;
    int size;

public:
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
        display();
    }
    Node *gethead()
    {
        return head;
    }
    void display()
    {
        size = 0;
        Node *p = head;
        while (p != nullptr)
        {
            cout << p->data;
            p = p->next;
            if (p)
                cout << "<--";
        }
        size++;
        cout << endl;
    }
    int delete_(int pos)
    {
        int x = -1;
        if (pos == 1)
        {
            x = head->data;
            p = head;
            head = head->next;
            delete p;
        }
        else
        {
            p = head;
            q = NULL;
            for (int i = 0; i < pos - 1 && p; i++)
            {
                q = p;
                p = p->next;
            }
            if (p)
            {
                x = p->data;
                q->next = p->next;
                delete p;
            }
            display();
            return x;
        }
    }
    void reverse_elements()
    {
        int a[size];
        p = head;
        int i = 0;
        while (p != NULL)
        {
            a[i++] = p->data;
            p = p->next;
        }
        p = head;
        i--;
        while (p != NULL)
        {
            p->data = a[i--];
            p = p->next;
        }
        display();
    }
    // reverse the linked list using reverse links
    // this is preferd bcoz we have large data
    void reverse_links()
    {
        // using additional pointer

        Node *r;
        p = head;
        q = NULL;
        r = NULL;
        while (p)
        {
            r = q;
            q = p;
            p = p->next;
            q->next = r;
        }
        head = q;
        display();
    }
  //l.display();
  //  recursion reverse
    void reverse_recursion(Node *q, Node *p)
    {
        if (p) // terminating condition
        {
            reverse_recursion(p, p->next);
            p->next = q;
        }
        else
        {
            head = q;
        }
      //display(); this is giving infinte loop

    }
};
int main()
{
    int a[] = {1, 4, 6, 3, 5};
    Linked_list l;
    l.create(a, 5);
    l.delete_(3);
    l.reverse_elements();
    l.reverse_links();
   l.reverse_recursion(NULL, l.gethead());

    return 0;
}