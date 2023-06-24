// about the throw the functions
#include <iostream>
using namespace std;
class myexception : exception
{
};
int division(int a, int b)throw(myexception)//what we are throwing//it is optional
{
    if (b == 0)
        throw myexception();
    return a / b;
}
int main()
{
    int x = 10, y = 0, z;
    try
    {
        if (y == 0)
            throw myexception();
        z = x / y;
        cout << z << endl;
    }
    catch (myexception e)
    {
        cout << "error " << endl;
    }
    cout << "bye" << endl;

    return 0;
}