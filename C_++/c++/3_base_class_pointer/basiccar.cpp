#include<iostream>
using namespace std;
class basiccar{
    public:
    void start(){
        cout<<"basic car has started"<<endl;
    }
};
class advancecar:public basiccar{
public:
void music(){
    cout<<"music is playing"<<endl;
}

};
int main(){
    advancecar c;
    basiccar *ptr=&c;
    ptr->start();
}