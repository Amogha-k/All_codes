#include<iostream>
using namespace std;
class amogh;//protype 
class test{
    private:int a;
    protected:int b;
    public:int c;
friend amogh;
};
class amogh{
    public:
    // test t;
    // t.a=10;
    // t.b=87;
    // t.c=87;
    
    void fun()
    {
        test t;
        t.a=5;
        t.b=6;
        t.c=67;
        cout<<t.c;
    }
};