#include <iostream>
using namespace std;
int main()
{int a,b,c;

   cout<<"enter the a b c"<<endl;
   cin>>a>>b>>c;
   int r=a>b&&a>c?a:(b>c?b:c);
   cout<<r<<endl;

}
