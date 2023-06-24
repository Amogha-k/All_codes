#include<iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle(int l=0,int b=0)
    {
        length=setLength(l);
        breadth=setBreadth(b);
    }
    int setLength(int length)
    {
        abs(length);
        this->length = length;
        return length;
    }
    int setBreadth(int b=0)
    {

        breadth = abs(b);
        return breadth;
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
    rectangle r1(10,5);
    cout<<r1.area()<<endl;

}