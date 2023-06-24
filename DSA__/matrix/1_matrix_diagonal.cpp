//
#include <iostream>
using namespace std;
class matrix
{
private:
    int size;
    int *a;

public:
    matrix()
    {
        int size=10;
        a=new int [size];//dont intialize the array here like int *a=new int[size];
    }
    void create_dynamic_array_(int size)
    {
        this->size = size;
        a = new int[size];
        cout << "enter the elements of the array" << endl;
        for (int i = 0; i < size; i++)
        {
            cin >> a[i];
        }
        display();
    }
    void set(int i, int j, int element)
    {
        if (i == j)
            a[i - 1] = element;
    }
    int get(int i, int j)
    {
        if (i == j)
        {
            return a[i - 1];
        }
        else
        {
            return 0;
        }
    }
    void display()
    {

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (i == j)
                {
                    cout << a[j] << " ";
                }
                else
                {
                    cout << "0"
                         << " ";
                }
            }
            cout << endl;
        }
    }
};

int main()
{
    int size;
    cout << "Enter the size of the array" << endl;
    cin >> size;
    matrix m;
    m.create_dynamic_array_(size);
    m.set(5, 5, 10);
    cout << "the value at the index is " << m.get(5, 5) << endl;
    cout << "the value at the index is " << m.get(3, 2) << endl;
    m.display();
    return 0;
}