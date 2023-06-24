//
#include <iostream>
#include<math.h>
using namespace std;
class Node
{
public:
    int exp;
    int coff;
    Node *next;
};
class polynomial
{
private:
    Node *t, *last, *poly;
    int i, num;

public:
    void create()
    {
        cout << "Enter the numbers of terms" << endl;
        cin >> num;
        cout << "Enter the each term with coeff and exp" << endl;

        for (i = 0; i < num; i++)
        {
            t = new Node();
            cin >> t->coff >> t->exp;
            t->next = NULL;
            if (poly == NULL)
            {
                poly = last = t;
            }
            else
            {
                last->next = t;
                last = t;
            }
        }
    }
    void display()
    {   Node *p=poly;
        while(p)
        {
            cout<<p->coff<< " "<<p->exp;
            p=p->next;
        }
        cout<<endl;
    }
    long eval(int x)
    {
        Node *p=poly;
        long val=0;
        while(p)
        {
            val+=p->coff*pow(x,p->exp);
            p=p->next;
        }
        return val;
    }
};
int main()
{
    polynomial p;
    p.create();
    p.display();
    cout<<p.eval(1);
    return 0;
}