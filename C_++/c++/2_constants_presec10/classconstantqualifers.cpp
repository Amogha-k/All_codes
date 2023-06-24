// 
#include<iostream> 
using namespace std; 
class demo{
    public:
    int c=10;
    int a=11;
    void display() const
    {
//it is constant c++;//we cant use
        cout<<c<<endl;
    }
};
int main() 
{ 
    demo d;
    d.display();
  
    return 0 ;
}