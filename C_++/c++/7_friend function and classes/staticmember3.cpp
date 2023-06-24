// studennt
#include<iostream> 
using namespace std; 
class student{
    public:
    int roll;
    string name;
    static int addno;
    student(string n){
        name=n;
roll=addno++;
    }
};
int student::addno=1;//we an use static memory in various class
int main() 
{ 
  student s1("amogh");
  student s2("ammu");
  cout<<s1.roll <<" "<< s1.name<<endl;
  cout<<s2.roll <<" "<< s2.name<<endl;
    return 0 ;
}