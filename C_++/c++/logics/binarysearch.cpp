#include<iostream>
using namespace std;
int main()
{
    int mid,l=0,h=9,key;
    int a[10]={1,2,3,4,5,6,7,8,9};
      cout<<"enter the key";
      cin>>key;
      while(l<=h){
        mid=(l+h)/2;
        if(key==a[mid]){
            cout<<"key found at"<<mid<<endl;
            return 0;
        }
        else if(key>a[mid])
        {
            mid=l+1;
        }
        else{
            mid=h-1;
        }
      }
}