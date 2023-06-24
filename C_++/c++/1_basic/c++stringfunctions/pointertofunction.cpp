#include<iostream>
using namespace std;
int display()
{
   cout<<"hell0 world";

}
int main()
{
    int (*fp)();
    fp=display;
    (*fp)();
}