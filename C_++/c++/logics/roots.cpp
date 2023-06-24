#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int root1, root2;
    int a, b, c;
    cout << "enter the values a b c";
    cin >> a >> b >> c;
    root1 = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
    root2 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;
    cout << "Roots are" << root1 << root2;
}