// 
#include<iostream> 
#include<fstream>
using namespace std; 
class student{
    public:
    string name;
    int roll;
    string branch;
    friend ofstream &operator<<(ofstream &ofs,student &s);
};
ofstream & operator<<(ofstream &ofs,student &s){
    ofs<<s.name<<endl;
    ofs<<s.roll<<endl;
    ofs<<s.branch<<endl;
}
int main() 
{ 
    student s1;
    s1.name="khon";s1.roll=20;s1.branch="CS";
    ofstream ofs("student.txt",ios::trunc);
   ofs<<s1;
   ofs.close();
    return 0 ;
}