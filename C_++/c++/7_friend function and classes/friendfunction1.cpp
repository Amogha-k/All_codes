#include<iostream>
using namespace std;
class test{
    private:int a;
    protected:int b;
    public:int c;
friend void fun();
};
void fun(){
    test t;
    t.a=10;
    t.b=87;
    t.c=87;
}