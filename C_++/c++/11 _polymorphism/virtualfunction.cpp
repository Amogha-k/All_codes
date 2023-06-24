#include<iostream>
using namespace std;

class Base
{
    public:
	virtual void fun()//virtual key word is used call the function in dervied class
	{
		cout<<"fun of Base"<<endl;
	}
	
};
    
class Derived:public Base
{
    public:
	void fun()
	{
		cout<<"fun of Derived"<<endl;
	}
	
};
    
int main()
{
	Derived d;
    Base *p=&d;
    p->fun();
	    
}