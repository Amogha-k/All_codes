#include<iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle(int l=1,int b=1)
    {
        length=setLength(l);
        breadth=setBreadth(b);
    }
    int setLength(int l=0)
    {
        abs(l);
        length = l;
        return length;
    }
    rectangle(rectangle &r){
        length=r.length;
        breadth=r.breadth;
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
    rectangle r2(r1);
    cout<<r2.area()<<endl;


}