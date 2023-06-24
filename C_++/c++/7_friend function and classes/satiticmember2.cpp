// inovva
#include<iostream> 
using namespace std; 
class bmw{
    public:
    static int price;
    static int getprice(){
        return price;
    }
};
int bmw::price=20;
int main() 
{ 
    bmw b1,b2,b3;
    cout<<b1.price<<endl;
    cout<< bmw::price<<endl;
  
    return 0 ;
}