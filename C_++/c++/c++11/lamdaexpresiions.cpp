// 
#include<iostream> 
using namespace std; 
template<typename T>
void fun(T p)
{
    p();
}

int main() 
{ int A=10;
    //[](int x,int y){cout<<"sum "<<x+y<<endl;}(10,20);
  //int a= [](int x,int y)->int{return x+y;}(10,20);
   // cout<<a<<endl;
  auto f=[&A](){cout<<A++<<endl;};
   fun(f);
   A++;//only when we call by refernce
   f();
    return 0 ;
}