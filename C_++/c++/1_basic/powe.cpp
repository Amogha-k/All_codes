#include<iostream>
using namespace std;


//write a pow() function here 
int power(int a , int b)
{
    int result = 1;
    for (int i = 0 ; i < b ;i++)
    {
        result*=a;
    }
    return result;
}

int main()
{
    int a=power(2,5);
    cout<<a;
}