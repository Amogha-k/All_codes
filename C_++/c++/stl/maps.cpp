// 
#include<iostream> 
#include<map>
using namespace std; 
int main() 
{ 
   map<int,string> m;
   m.insert(pair<int,string>(1,"amogh"));
   m.insert(pair<int,string>(2,"darshan"));
   m.insert(pair<int,string>(3,"preetham"));
   map<int,string>::iterator itr;
   for(itr=m.begin();itr!=m.end();itr++)
   cout<<itr->first<<" "<<itr->second<<endl;
   map<int,string>::iterator itr1;
   itr1=m.find(2);
   cout<<"value found"<<endl;
   cout<<itr1->first<<" "<<itr1->second<<endl;
   

  
    return 0 ;
}