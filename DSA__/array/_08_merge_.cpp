//merging of an array
#include <iostream>
using namespace std;

int main()
{
    int i = 0, j = 0, k = 0;
    int m = 5, n = 5;
    int a[5] = {1, 3, 7, 7, 11};
    int b[5] = {2 ,11,23,12,10};
    int c[10] = {0};
    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }
    for (; i < m;)
    {
        c[k++] = a[i++];
    }
    for (; j < n;)
    {
        c[k++] = b[j++];
    }
    for (int t = 0; t < 10; t++)
    {
        cout << c[t]<<" ";
    }

    return 0;
}