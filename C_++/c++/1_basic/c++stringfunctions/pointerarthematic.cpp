#include<iostream>
using namespace std;
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int *p=a;
    int q=a[7];
    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;
    p--;
    cout<<*p<<endl;
    p=p+2;
    cout<<*p<<endl;
    p=p-2;
    cout<<*p<<endl;
    p=p+8;
    p=p-q;
    cout<<*p<<endl;
}