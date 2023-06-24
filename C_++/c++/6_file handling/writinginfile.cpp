// 
#include<iostream> 
#include<fstream>//must
using namespace std;

int main() 
{ 
    ofstream ofs("my.txt",ios::trunc);
    ofs<<"amogh"<<endl;
    ofs<<12<<endl;
    ofs<<"it"<<endl;
    ofs.close();
    return 0 ;
}