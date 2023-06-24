#include <iostream>
using namespace std;
class array
{
public:
    int *a;
    int len;
    
    array(int b[])
    {
        a = b;
    }
    void display()
    {
        int i = 0;
        for (; i < 4; i++)
        {
            cout << a[i] << " ";
        }
    }
};
int main()
{
    int a[] = {3, 4, 5, 5};
    array *x = new array(a);
    x->display();
    
   // x->display();

    return 0;
}