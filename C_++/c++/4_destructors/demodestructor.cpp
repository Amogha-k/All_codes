//
#include <iostream>
using namespace std;
class demo
{
public:
int *p;
    demo()
    { p=new int[10];
        cout << "constructor of demo" << endl;
    }
    ~demo()
    {
        delete []p;
        cout << "destructor of demo" << endl;
    }
};
void fun()
{
    demo *p=new demo();//when dynamically created in heap only constrtcutor will be exectuded.
    delete p;//destructor is called
}
int main()
{

    fun();
    return 0;
}