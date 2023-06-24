//p/q
#include<iostream>
using namespace std;
class rational{
    private:
    int p;
    int q;
    public:
    rational(int num=1,int den=1){
        p=num;
        q=den;

    }
    int getP(){
        return p;
    }
    int getQ(){
        return q;
    }
   friend rational operator+(rational x,rational y);
   friend ostream &operator<<(ostream &o,rational &r);
};
rational operator+(rational x,rational y){
    rational temp;
    temp.p=x.p * y.q+y.p * x.q;
    temp.q=x.q * y.q;
    return temp;
}
ostream &operator<<(ostream &o,rational &r){
    o<<r.p<<"/"<<r.q;
}
int main()

{
  rational r1(3,4);
  rational r2(5,6);
  rational r3;
  cout<<r1<<endl;
  cout<<r2<<endl;
  r3=r1+r2;
  cout<<r1 <<" + "<< r2 <<" ="<<r3<<endl;
//   cout<<r3;

}