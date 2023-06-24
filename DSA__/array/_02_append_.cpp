#include <iostream>
using namespace std;
class array
{
public:
    int lenght = 5;
    int *a;
    void insert(int b[], int index, int element)
    {
        a = b;
        for (int i = lenght; i > index; i--)
        {
            a[i] = a[i - 1];
        }
        a[index] = element;
        lenght++;
        for (int i = 0; i < lenght; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    void appendd(int x)
    {
        a[lenght++] = x;
        for (int j = 0; j < lenght; j++)
        {
            cout << a[j] << " ";
        }
    }
    void deletee(int index)
    {
        for (int i = index; i < lenght - 1; i++)
        {
            a[i] = a[i + 1];
        }
    }
};
int main()
{
    int a[] = {3, 13, 4, 2, 5};
    array *p = new array();
    p->insert(a, 3, 99);
    p->appendd(100);
}
