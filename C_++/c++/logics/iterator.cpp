#include<iostream>
using namespace std;
int main()
{int count=0;
    string s="HELLO";
    string :: iterator a;
    for(a=s.begin();a!=s.end();a++)
    {
        if((*a)<='Z'& *a>='A')
        *a+=32;
        count++;
    }cout<<count<<endl;
    cout<<s<<endl;
}