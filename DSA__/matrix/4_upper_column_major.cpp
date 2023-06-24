// column major
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
            if (i <= j)
            {
                input >> l.a[j * (j - 1) / 2 + (i - 1)];
            }
        }
        cout << endl;
    }
}

void lower::set(int i, int j, int element)
{
    if (i <= j)
    {
        a[j * (j - 1) / 2 + (i - 1)] = element;
    }
}
int lower::get(int i, int j)
{
    if (i <= j)
    {
        return a[j * (j - 1) / 2 + (i - 1)];
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
            if (i <= j)
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