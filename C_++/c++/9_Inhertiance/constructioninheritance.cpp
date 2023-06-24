#include<iostream>
using namespace std;
class base{
    public:
    base()
    {
cout<<"non param base"<<endl;
    }
    base(int x){
cout<<"param of base "<<x<<endl;
    }
};
class derived:public base{
public:
derived()//non param
{
    cout<<"non param of dervied"<<endl;
}
derived(int y)
{
    cout<<"paramised of derived "<<y<<endl;
}
derived(int x,int y):base(x)
{
    cout<<"paramised of derived "<<y<<endl;
}
};
int main()
{
    derived d(5,10);

}