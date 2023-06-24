#include<iostream>
using namespace std;
#define size 3
class stack{
    int top;
    int arr[size];
    public:
    stack()
    {
        top=-1;
    }
    void push(int val)
    {
        if(top==size-1)
        cout<<"stack is full"<<endl;
        else
        {  ++top;
            arr[top]=val;
        }
    }
    void pop()
    {
        if(top==-1)
        cout<<"stack is empty"<<endl;
        else
        {cout<<"poped element :"<<arr[top]<<endl;
        top--;
        }

    }
    

};
int main()
{
    stack s;
        
    cout<<"Pushing element: "<<10<<endl;
    s.push(10);
    cout<<"Pushing element: "<<20<<endl;
    s.push(20);
    cout<<"Pushing element: "<<30<<endl;
    s.push(30);
    cout<<"Pushing element: "<<40<<endl;
    s.push(40);
    s.pop();
    cout<<"Pushing element: "<<40<<endl;
    s.push(40);
    s.pop();
    s.pop();
    s.pop();
    s.pop();

    return 0;
}