// all sets operations like union intersection diffrence membership
#include <iostream>
using namespace std;
class array
{
private:
    int i = 0, j = 0, k = 0;
    int m = 5, n = 5;
    int a[5] = {1, 3, 7, 10, 11};
    int b[5] = {3, 11, 12, 13, 50};
    int c[10] = {0};

public:
      void set_array(int *p)
      {
        
      }
    // array(int *r, int *s, int size)
    // {
    //     p = r;
    //     q = s;
    //     this->size = size;
    // }
    void unionn()
    {

        while (i < m && j < n)
        {
            if (a[i] < b[j])
            {
                c[k++] = a[i++];
            }
            else if (a[i] > b[j])
            {
                c[k++] = b[j++];
            }
            else
            {
                c[k++] = a[i++];
                j++;
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
        display();
    }
    void intersect()
    {

        while (i < m && j < n)
        {
            if (a[i] < b[j])
            {
                i++;
            }
            else if (a[i] > b[j])
            {
                j++;
            }
            if (a[i] == b[j])
            {
                c[k++] = a[i++];
                j++;
            }
        }
        // for (; i < m;)
        // {
        //     c[k++] = a[i++];
        // }
        // for (; j < n;)
        // {
        //     c[k++] = b[j++];
        // }
        // display();
        for (int t = 0; t < 10; t++)
        {
            cout << c[t] << " ";
        }
    }
    void differcene()

    {
        while (i < m && j < n)
        {
            if (a[i] < b[j])
            {
                c[k++] = a[i++];
            }
            else if (a[i] > b[j])
            {
                j++;
            }
            if (a[i] == b[j])
            {
                i++;
                j++;
            }
        }
        display();
    }
    int membership(int key)
    {
        for (int i = 0, j = 0; i < 5, j < 5; i++, j++)
        {
            if (key == a[i])
            {
                return i;
            }

            if (key == b[j])
            {
                return j;
            }
        }
        cout << " key not found" << endl;
    }
    void display()
    {
        for (int t = 0; t < 10; t++)
        {
            cout << c[t] << " ";
        }
        cout << endl;
    }
};

int main()
{
    int i = 1 ;
    array *arr1 = new array();
    array *arr2 = new array();
    int size, index, value;

    while (i <= 2)
    {
        cout << "enter the size of the array"<< i << endl;
        cin >> size;
        
        int *a = new int[size];

        cout << "Enter the elements in the array" << endl;

        for (int i = 0; i < size; i++)
        {
            cin >> a[i];
        }

    }

    // a->unionn();
    // a->intersect();
    // a->differcene();
    //cout << a->membership(10) << endl;
    return 0;
}