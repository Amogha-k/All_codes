// inner/nested class
#include<iostream> 
using namespace std; 
class outer{
   public:
   outer(){

   }
   void fun(){
    i.display();
   }
   class inner{
    public:
    void display(){
        cout<<"display of inner"<<endl;
    }
   } ;
inner i;//we have to declare the variable outer the class
};
int main() 
{ 
    outer::inner i;
    outer o;
     cout<<"hello";
    return 0 ;
}