#include<iostream>
using namespace std;
class rectangle{
    private:
    int length;
    int breadth;
    public:
    rectangle();
    rectangle(int l,int b);
    rectangle(rectangle &r);
    int getLength(){return length;}//inline function
    int getBreadth();
    int setLength(int l);
    int setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare();
    ~rectangle();
};
int main()
{

}
rectangle::rectangle(int l,int b){
    length=1;
    breadth=1;
}
rectangle::rectangle(rectangle &r)
{
    length=r.length;
    breadth=r.breadth;
}
