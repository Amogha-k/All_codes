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
public:
    Node *head, *q, *p;
    int size=0;
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
    void display()
    {
        
        p = head;
        while (p != nullptr)
        {
            cout << p->data;
            p = p->next;
            if (p)
                cout << "<--";
            size++;
        }
        cout << endl;
    }
    void insert_sorted(int x)
    {
        p = head;
        q = NULL;
        Node *t;
        while (p && p->data < x)
        {
            q = p;
            p = p->next;
        }
        t = new Node(x);
        t->next = q->next;
        q->next = t;
        display();
    }
    bool check_sorted()
    {
        p = head;
        int x = INT32_MIN;
        while (p)
        {
            if (p->data < x)
            {
                return false;
            }
            x = p->data;
            p = p->next;
        }
        return true;
    }
    void remove_duplicate_sorted()
    {
        p = head;
        q = head->next;
        while (q != NULL)
        {
            if (p->data != q->data)
            {
                p = q;
                q = q->next;
            }
            else
            {
                p->next = q->next;
                delete q;
                q = p->next;
            }
            
        }
        display();
    }
    
};
int main()
{
    int arr[] = {1, 2, 3, 4};
    Linked_list l;
    l.create(arr, 4);
    // l.display();
   l.insert_sorted(2);
    //l.display();
   // if (l.check_sorted())
    // {
    //     cout << "The linked list is sorted" << endl;
    // }
    // else
    // {
    //     cout << "The linked list is not sorted" << endl;
    // }
    l.remove_duplicate_sorted();
    //l.display();

    return 0;
}
