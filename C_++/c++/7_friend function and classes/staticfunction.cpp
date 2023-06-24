#include<iostream>
using namespace std;
class test{
    public:
    int a;
    static int count;
    test(){
        a=10;
        count++;
    }
    static int getcount(){
       // a++;we cant use non static member
        return count;
    }
};
int test::count=0;
//
int main(){

    test t1;
    test t2;
   cout<<test::getcount()<<endl;
    cout<<t2.count<<endl;//have same memory storage

}
