#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="hello love the lamda";
    cout<<s.find_first_of('l',4)<<endl;
    cout<<s.find_last_of('l',4)<<endl;
    cout<<s.rfind('l')<<endl;
    
    cout<<s.substr(2,4)<<endl;
}