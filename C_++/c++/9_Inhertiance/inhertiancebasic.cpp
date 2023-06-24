#include <iostream>
using namespace std;
class base{
    public:
    int a;
    void display(){
        cout<<"display of base "<< a<<endl;
    }
};
class derived:public base{
    public:
    void show (){
        cout<<"show of dervied"<<endl;
    }
};
int main()
{
    derived d;
    d.a=10;
    d.display();
    d.show();
  
}
