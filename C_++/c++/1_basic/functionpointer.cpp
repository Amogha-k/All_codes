#include <iostream>
using namespace std;
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
        return b;
}
int min(int a, int b)
{
    if (b > a)
    {
        return a;
    }
    else
        return b;
}
int main()
{
    int c;
    int (*fp)(int, int);
    fp = max;
    c = (*fp)(4, 5);
    cout<<c<<endl;
    fp=min;
    c=(*fp)(4,5);
    cout<<c<<endl;
}
