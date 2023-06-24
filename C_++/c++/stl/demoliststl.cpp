// 
#include<iostream> 
#include<list>
using namespace std; 
int main() 
{ //we can change data type 
 list<int> v={1,2,3,4,5};   
  v.push_back(20);
  v.push_back(30);
  v.pop_back();//learn differnt data structures differnce
  list<int> ::iterator itr;
  cout<<"using iterator"<<endl;
  for(itr=v.begin();itr!=v.end();itr++)
  cout<<++*itr<<endl;
  cout<<"by for each loop"<<endl;
for(int x :v)
cout<<x<<endl;
    return 0 ;
}