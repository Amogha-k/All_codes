#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};
class linkedlist
{
private:
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
        // p = head;
        // cout << p;
        Node *p = head;
        while (p != nullptr)
        {
            cout << p->data;
            p = p->next;
            if (p != nullptr)
                cout << " <-- ";
        }
        cout << endl;
    }
    //
    void recursive_display(Node *p)
    {
        if (p)
        {
            cout << p->data << " ";
            if (p)
            {
                cout << "<--";
            }
            recursive_display(p->next);
        } // cout<<endl;
        // return ;
    }
    void reverse_display(Node *p)
    {
        // Node *p=head;

        if (p)
        {
            reverse_display(p->next);
            cout << p->data << " ";
            if (p)
            {
                cout << "<--";
            }
        }
        // cout<<endl;
    }
    int count()
    {
        Node *p = head;
        int count = 0;
        while (p != nullptr)
        {
            count++;
            p = p->next;
        }
        // cout<<count;
        return count;
    }
    int recursion_count(Node *p)
    {
        int count = 0;
        if (p)
        {
            return 1 + recursion_count(p->next);
        }
        return 0;
    }
    int sum()
    {
        Node *p = head;
        int sum = 0;
        while (p != nullptr)
        {
            sum += p->data;
            p = p->next;
        }
        return sum;
    }
    int recursion_sum(Node *p)
    {
        int sum = 0;

        if (p == NULL)
        {
            return 0;
        }

        else
        {
            return recursion_sum(p->next) + p->data;
        }
    }
    int maximum()
    {
        Node *p = head;
        int max = 0;
        while (p)
        {
            if (p->data > max)
                max = p->data;
            p = p->next;
        }
        return max;
    }
    int recursion_max(Node *p)
    {
        int max = 0;
        if (p == nullptr)
        {
            return INT64_MIN;
        }
        else
        {
            max = recursion_max(p->next);
            return max > p->data ? max : p->data;
        }
    }
    Node *search(int key)
    {
        Node *p = head;
        while (p)
        {
            if (key == p->data)
                return p;
            p = p->next;
        }
        return nullptr;
    }
    Node * Rsearch(Node *p, int key)
    {
        if (p)
        {
            if (key == p->data)
            {
                return p;
            }
            else
            {
                return Rsearch(p->next,key);
            }
        }
        return NULL;
    }
    Node* improved_search(int key)
    {
        Node *p=head;
        Node *q=NULL;
        while(p!=NULL)
        {
            if(key==p->data)
            {
                q->next=p->next;
                p->next=head;
                head=p;
                return p;
            }
            else{
                q=p;
                p=p->next;
            }
        }
        return NULL;
    }
};

int main()
{

    int A[] = {5, 8, 9, 6};
    int n = (sizeof(A) / sizeof(A[0]));

    linkedlist l;
    // create
    l.create(A, n);
    // Display Linked List
    l.display();
    l.recursive_display(l.head);
    cout << endl;
    l.reverse_display(l.head);
    cout << endl
         << "counting by default=" << l.count() << endl;
    cout << "counting using recursion=" << l.recursion_count(l.head);
    // cout<<"hi";
    cout << endl
         << "The sum is =" << l.sum() << endl;
    cout << "The sum using recursion is=" << l.recursion_sum(l.head) << endl;
    cout << "The maximum number is =" << l.maximum() << endl;
    cout << "The maximum number using recursion is =" << l.recursion_max(l.head) << endl;
    cout<<"The adress of element is recursively "<<l.Rsearch(l.head,5)<<endl;
    cout<<"The adress of element is  "<<l.search(5)<<endl;
    cout<<"The adress of improved search the element is "<<l.improved_search(10)<<endl;
    return 0;
}
