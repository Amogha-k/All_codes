#include <iostream>
using namespace std;

class rectangle
{
private:
    int length;
    int breadth;

public:
    int setLength(int l)
    {
        abs(l);
        length = l;
    }
    int setBreadth(int b)
    {

        breadth = abs(b);
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length * breadth);
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
};
int main()
{
    rectangle r;
    r.setLength(10);
    r.setBreadth(-5);
    cout << r.area();
}
