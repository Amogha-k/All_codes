#include <iostream>
using namespace std;
//
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
    Node *second_head;
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
        last=temp;
       //last=head->next->next;
       display(head);
    }
    void create2(int *A, int n)
    {
        second_head = new Node(A[0]);

        Node *temp;
        Node *last;
        last = second_head;
        // Create a Linked List
        for (int i = 1; i < n; i++)
        {

            // Create a temporary Node
            temp = new Node(A[i]);

            // last's next is pointing to temp
            last->next = temp;
            last = temp;
        }
        display(second_head);
    }
    Node *getsecond()
    {
        return second_head;
    }
    void display(Node *point)
    {
        size = 0;
        Node *p = point;
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
    Node *gethead()
    {
        return head;
    }
    void concatenate()
    {
        p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = second_head;
        second_head = NULL;
        display(head);
    }
    void merge()
    {
        Node *third, *last;
        if (head->data < second_head->data)
        {
            third = last = head;
            head = head->next;
            last->next = NULL;
        }
        else if (second_head->next)
        {
            third = last = second_head;
            second_head = second_head->next;
            last->next = NULL;
        }
        // this to run full linked list
        while (head && second_head)
        {
            if (head->data < second_head->data)
            {
                last->next = head;
                last = head;
                head = head->next;
                last->next = NULL;
            }
            else if (second_head->data < head->data)
            {
                last->next = second_head;
                last = second_head;
                second_head = second_head->next;
                last->next = NULL;
            }
        }
        // if any linked list has more
        // number of elements
        if (head != NULL)
        {
            last->next = head;
        }
        else if (second_head != NULL)
        {
            last->next = second_head;
        }
        display(third);
    }
    int isloop()
    {
        p = q = head;
        do
        {
            p = p->next;
            q = q->next;
            q = q != NULL ? q->next : NULL;
        } while (p && q && p!=q);
        // checking any pointer having same adress
        return p == q ? true : false;
    }
    void create_loop()
    {
        //this will impact on the created linked list
    Node *x,*y;
    x=head->next->next;//pointing to 30
    //we can use the while loop to do this 
    y=head->next->next->next->next;
    y->next=x;//its pointing to 30 again 
    }
};
int main()
{
    Linked_list l;
    int a[] = {10, 20, 30, 40, 50};
    int b[] = {1, 2, 3, 44, 55};
    l.create(a, 5);
  
    //it is a loop
    // l.create2(b, 5);
    //   l.concatenate();
    // l.merge();
    l.create_loop();
    if (l.isloop())
    {
        cout << "The linked list is loop" << endl;
    }
    else
    {
        cout << "The linked list is not loop" << endl;
    }
}