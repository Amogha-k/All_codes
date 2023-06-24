#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, len = 0, sum = 0;
    cout << "enter the number ";
    cin >> n;
    int m = n;
    int j = n;

    // find the length of a digit
    while (n != 0)
    {#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, len = 0, sum = 0;
    cout << "enter the number ";
    cin >> n;
    int m = n;
    int j = n;

    // find the length of a digit
    while (n != 0)
    {
        len++;
        n = n / 10;
    }

    cout << "length is equal to " << len << endl;
    
    while (j!=0)
    {
        int r=j%10;
        sum+=pow(r,len);
        cout<<sum<<endl;
        j/=10;
    }
    cout << " " << sum << endl;

    if (sum == m)
    {
        cout << "it is armstrong number";
    }
    else
    {
        cout << "it is not a armstrong number";
    }
}
    // find the length of a digit
    while (n != 0)
    {
        len++;
        n = n / 10;
    }

    cout << "length is equal to " << len << endl;
    
    while (j!=0)
    {
        int r=j%10;
        sum+=pow(r,len);
        cout<<sum<<endl;
        j/=10;
    }
    cout << " " << sum << endl;

    if (sum == m)
    {
        cout << "it is armstrong number";
    }
    else
    {
        cout << "it is not a armstrong number";
    }
}