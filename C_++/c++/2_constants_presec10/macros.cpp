// 
#include<iostream> 
using namespace std; 
#define pi 3.14
//#define pi 3.145//it will only execute
#ifndef pi
  #define pi 1323
#endif
#define c cout
#define max(x,y) (x>y?x:y)//always use brackets
#define msg(x) #x
int main() 
{   
    // cout<<pi;
     c<<pi<<endl;
     c<<max(10,9)<<endl;
    c<<msg(hello)<<endl;  
    return 0 ;
}
