// 
#include<iostream> 
using namespace std; 
int main() 
{ 
   int x=10;
    int * const ptr=&x;
   //++*ptr; it can not modified
   int y=10;
   //ptr=&y;//it can be possible//if pointer is constant
  cout<<*ptr<<endl;
  //ptr++;
    return 0 ;
}