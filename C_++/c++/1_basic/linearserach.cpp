#include<iostream>
using namespace std;
int main(){
    int i,n=10,a[10];
   int key;
    cout<<"enter the elements";

    for(i=0;i<10;i++){
 cin>>a[i];
    }
    cout<<"enter the key";
    cin>>key;
    for(i=0;i<10;i++){
      if (key==a[i]){
        cout<<"key found at "<<i<<"\n";
        return 0;

      }
    }
    cout<<"key not found";
}