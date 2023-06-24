#include<iostream>
using namespace std;
float fun(){
    return 2.3f;

}
 main()
{
    double d=12.3;
    int i=9;
    auto x=2*d+i;
    cout<<x<<endl;
    cout<< fun()<<endl;;
}