// 
#include<iostream> 
using namespace std; 
class base{
    public:
   virtual  ~base()
    {
        cout<<"destructor of base"<<endl;
    }
};
class dervied:public base
{ public:
    ~dervied()
    {
        cout<<"destructor of dervied"<<endl;
    }
};
void fun(){
    base *p=new dervied;
    delete p;
}
int main() 
{ 
    fun();
  
    return 0 ;
}