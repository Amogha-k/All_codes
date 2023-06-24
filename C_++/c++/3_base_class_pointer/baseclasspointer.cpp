#include<iostream>
using namespace std;
class rectangle{
    public:
    void area()
    {
        cout<<"area of rectangle"<<endl;
    }
};
class cubiod : public rectangle
{
  public:
  void volume(){
    cout<<"volume of cubiod"<<endl;
  }
};
int main()
{
    cubiod c;
    rectangle *ptr=&c;
    

    ptr->area();
   

}
