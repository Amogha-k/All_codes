#include<iostream>
using namespace std;
int main()
{
    string s="hello";
    string empty="";
    cout<<s.length()<<endl;
    cout<<s.size()<<endl;
    cout<<empty.size()<<endl;
    cout<<s.capacity()<<endl;
    cout<<s.max_size()<<endl;
    s.clear();
    cout<<s.length()<<endl;
    cout<<s<<endl;
    cout<<s.empty()<<endl;

}