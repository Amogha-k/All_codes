// 
#include<iostream> 
using namespace std; 
void fun(const int &a,int &b){
   // a++;because it is as declared as constant
    cout<<a<<" "<<b<<endl;
}
int main() 
{ 
    int x=10,y=93;
  fun(x,y);
    return 0 ;
}