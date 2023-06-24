// class for stacks
//only for int type
#include <iostream>
using namespace std;
//to make universal
template<class t>
class stack
{
private:
   t *stk;
    int top = -1;
    int size;

public:
    stack(int sz)
    {
        size = sz;
        stk = new t[size];
    }
   t push(t x);
   t pop();
};
template<class t>
t stack<t>::push(t x)
{
    if (top == size - 1)
        cout << "stack is full" << endl;
    else
    {
        top++;
        stk[top] = x;
    }
}
template<class t>
t stack<t> ::pop()
    {
        t x = 0;
        if (top == -1)
            cout << "stock is empty"<<endl;
         else
        {
            x = stk[top];
            top--;
         }
        return x;
    }


int main()
{
    stack<float> s(10);//we can use any type of data type
    s.push(4);
    s.push(5);
    s.push(9);
    return 0;
}