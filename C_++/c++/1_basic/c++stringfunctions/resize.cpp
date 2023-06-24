#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str="hello";
    str.resize(50);
    cout<<str.capacity()<<endl;
    
}