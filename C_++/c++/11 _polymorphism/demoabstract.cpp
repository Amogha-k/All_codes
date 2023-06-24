#include<iostream>
using namespace std;
class car{
    public:
   virtual void start()=0;//pure virtual fuction is called pure absract class
  virtual void stop()=0;//abstract
};
class bmw:public car
{
 public:
void start()
 {
 cout<<"bmw is started"<<endl;
 }
 void stop()
 {
 cout<<"bmw is stoped"<<endl;
 }
};
class benz:public car
{
public:
void start()
{
cout<<"benz is started"<<endl;
}
void stop()
{
cout<<"benz is stoped"<<endl;
}
};
int main()
{
   
car *p=new bmw;
p->start();
p=new benz;
p->stop();
}