// 
#include<iostream> 
#include<fstream>
using namespace std; 
int main() 
{ 
    ifstream infile;
   infile.open("my.txt");
    string name;
    int roll;
    string branch;
  infile>>name>>roll>>branch;
  infile.close();
  cout<<name<<endl;
  cout<<roll<<endl;
  cout<<branch<<endl;
    return 0 ;
}