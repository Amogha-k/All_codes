#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char destination[20]="";
    char source[] = "amoghavarsha";
    strncpy(destination, source,10);
    // cout << source << endl;
    cout << destination << endl;
}