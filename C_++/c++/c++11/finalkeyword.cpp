// 
#include<iostream> 
using namespace std; 
class parent //final keyword we cant use 
{               //it resists the inhertiance
  virtual void show() final
  {

  }
};
class child:parent
 {
// //void show(){
    //we cant use because it is final keyword is used

// }
};
int main() 
{ 
    
  
    return 0 ;
}