//
#include <iostream>
using namespace std;
template <class t>
class array
{
private:
    t *a;
    int size;
    int length;

public:
    // normal constructor
    array()
    {
        size = 10;
        length = 0;
        a = new t[size];
    }
    // parameterised constructor where user pass size to create an array
    array(int sz)
    {
        size = sz;
        length = 0;
        a = new t[size];
    }
    array(int *b, int size)
    {
        a = b;
        this->size = size;
    }
    ~array()
    {
        delete[] a;
    }
    void insert(int index, t value);
    t create();
    t deletee(int index);
    t search(int value);
    t sum();
    t display();
    array<t> *merge(array *b);
    t *getArray();
    int getSize();
};

template <class t>
t *array<t>::getArray()
{
    return a;
}

template <class t>
int array<t>::getSize()
{
    return size;
}

template <class t>
void array<t>::insert(int index, t value)
{
    if (index >= 0 && index <= length)
    {
        for (int i = length - 1; i > index; i--)
        {
            a[i + 1] = a[i];
        }
        a[index] = value;
        length++;
    }
    display();
}
template <class t>
t array<t>::create()
{
    cout << "Enter the size of the array : ";
    cin >> size;
    cout << "Enter the elements of the array " << endl;
    delete[] a;
    a = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
}
template <class t>
t array<t>::deletee(int index)
{
    t x = 0;
    if (index >= 0 && index < length)
    {
        x = a[index];
        for (int i = index; i > length - 1; i++)
        {
            a[i] = a[i + 1];
        }
        length--;
    }
    return x;
}
template <class t>
t array<t>::search(int key)
{
    for (int i = 0; i < length; i++)
    {
        if (key == a[i])
        {
            return i;
        }
    }
}
template <class t>
t array<t>::sum()
{
    int total = 0;
    for (int i = 0; i < length; i++)
    {
        total = total + a[i];
    }
    return total;
}
template <class t>
t array<t>::display()
{
    cout << "Array : " ;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
template <class t>
array<t> *array<t>::merge(array *b)
{
    int ind1 = 0, ind2 = 0, ind3 = 0;
    int maxSize = this->size + b->getSize();// size of array b
    int *result = new int[maxSize];
    t *c = b->getArray();
    while (ind1 < this->size && ind2 < b->getSize())
    {
        if (a[ind1] < c[ind2])
        {
            result[ind3++] = a[ind1++];
        }
        else
        {
            result[ind3++] = c[ind2++];
        }
    }
    while (ind1 < this->size)
    {
        result[ind3++] = a[ind1++];
    }
    while (ind2 < b->getSize())
    {
        result[ind3++] = c[ind2++];
    }
    array<t> *arr3 = new array<t>(result, ind3);
    return arr3;
}

int main()
{
    array<int> *arr1 = new array<int>();//size 10 array is created

    while (true)
    {
        cout << "\n\nMenu\n";
        cout << "1. create\n";
        cout << "2. Insert\n";
        cout << "3. Delete\n";
        cout << "4. Sum\n";
        cout << "5. Display\n";
        cout << "6. Search\n";
        cout << "7.merge\n";
        cout << "8.Exit\n";
        int ch;
        cout << "enter you choice ";
        cin >> ch;
        switch (ch)
        {
        case 2:
        {
            cout << "Enter the element and index ";
            int value, index;
            cin >> value >> index;
            arr1->insert(index, value);
            break;
        }
        case 3:
        {
            cout << "Enter index ";
            int index, value;
            cin >> index;
            value = arr1->deletee(index);
            cout << "Deleted Element is" << value;
            break;
        }
        case 6:
        {
            cout << "Enter element to search";
            int value, index;
            cin >> value;
            index = arr1->search(value);
            cout << "Element index " << index;
            break;
        }
        case 4:
        {
            cout << "Sum is " << arr1->sum();
            break;
        }
        case 5:
        {
            arr1->display();
            break;
        }
        case 1:
        {   //createing array for arr1
            arr1->create();
            break;
        }
        case 7:
        {
            array<int> *temp_obj = new array<int>();//creating another array object name temp
            temp_obj->create();//array created in seprate temp object,it has its size and length
            array<int> *ans = arr1->merge(temp_obj);//sending that object to  merge function
            ans->display();
            break;
        }
        case 8:
            exit(0);
        default:
            cout << "Invalid choice ." << endl;
        }
    }

    return 0;
}