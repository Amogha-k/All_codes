// coloumn major
#include <iostream>
using namespace std;
class lower
{
private:
    int size;
    int *a;

public:
    lower()
    {
        this->size = 10;
        a = new int[size];
    }
    lower(int sz)
    {
        this->size = sz;
        a = new int[sz];
    }
    void set(int i, int j, int element);
    int get(int i, int j);
    friend ostream &operator<<(ostream &output, lower &l);
    friend istream &operator>>(istream &input, lower &l);
    ~lower() { delete[] a; }
};
istream &operator>>(istream &input, lower &l)
{
    for (int i = 0; i < l.size; i++)
    {
        for (int j = 0; j < l.size; j++)
        {
            if (i >= j)
            {
                input >> l.a[l.size * (j - 1) - (((j - 2) * (j - 1) )/ 2) + (i - j)];
            }
        }
        cout << endl;
    }
}

void lower::set(int i, int j, int element)
{
    if (i <= j)
    {
        a[size * (j - 1) - (((j - 2) * (j - 1) )/ 2) + (i - j)] = element;
    }
}
int lower::get(int i, int j)
{
    if (i >= j)
    {
        return a[size * (j - 1) - (((j - 2) * (j - 1) )/ 2) + (i - j)];
    }
    else
    {
        return 0;
    }
}
ostream &operator<<(ostream &output, lower &l)
{
    for (int i = 0; i < l.size; i++)
    {
        for (int j = 0; j < l.size; j++)
        {
            if (i >= j)
            {
                output << l.get(i, j) << " ";
            }
            else
            {
                cout << "0"
                     << " ";
            }
        }
        output << endl;
    }
}
int main()
{
    int size;
    cout << "enter the size of the array" << endl;
    cin >> size;
    lower l(size);
    cout << "Enter the elements in the array" << endl;
    cin >> l;
    cout << l;

    return 0;
}