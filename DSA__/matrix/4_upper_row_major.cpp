// row major
#include <iostream>
using namespace std;
class upper
{
private:
    int size;
    int *a;

public:
   upper()
    {
        this->size = 10;
        a = new int[size];
    }
    upper(int sz)
    {
        this->size = sz;
        a = new int[sz];
    }
    void set(int i, int j, int element);
    int get(int i, int j);
    friend ostream &operator<<(ostream &output, upper &l);
    friend istream &operator>>(istream &input, upper &l);
    ~upper() { delete[] a; }
};
istream &operator>>(istream &input, upper &l)
{
    for (int i = 0; i < l.size; i++)
    {
        for (int j = 0; j < l.size; j++)
        {
            if (i <= j)
            {
                input >> l.a[l.size * (i - 1) - (((i- 2) * (i - 1) )/ 2) + (j - i)];
            }
        }
        cout << endl;
    }
}

void upper::set(int i, int j, int element)
{
    if (i <=j)
    {
        a[size * (i - 1) - (((i - 2) * (i - 1) )/ 2) + (j - i)] = element;
    }
}
int upper::get(int i, int j)
{
    if (i <= j)
    {
        return a[size * (i - 1) - (((i - 2) * (i - 1) )/ 2) + (j - i)];
    }
    else
    {
        return 0;
    }
}
ostream &operator<<(ostream &output, upper &l)
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
    upper l(size);
    cout << "Enter the elements in the array" << endl;
    cin >> l;
    cout << l;

    return 0;
}