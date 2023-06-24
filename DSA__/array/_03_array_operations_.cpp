// all array operations
#include <iostream>
using namespace std;
class array
{
private:
    int *a;
    int size;

public:
    array(int b[], int size)

    {
        a = b;
        this->size = size;
    }
    // appending the given data in the array at end position
    void append(int x)
    {
        a[size++] = x;
        display();
    }
    // inserting the given data at the given index
    void insert(int index, int element)
    {
        if (index >= 0 && index < size)
        {

            for (int i = size; i > index; i--)
            {
                a[i] = a[i - 1];
            }
            a[index] = element;
            size++;
            display();
        }
        else
        {
            cout << "the given index is out of range please give a another try" << endl;
        }
    }
    // deleting the elemenet in the given index
    void deletee(int index)
    {
        if (index > 0 && index << size)
        {
            for (int i = index; i < size; i++)
            {
                a[i] = a[i + 1];
            }
            size--;
            display();
        }

        else
        {
            cout << "the given index is out of range please slect in the range" << endl;
        }
    }
    // display of the array elements
    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << a[i] << " ";
        }
        cout<<endl;
    }
};

int main()
{
    int size;
    int ele, ind;
    cout << "enter the size of the array to create a array" << endl;
    cin >> size;
    int *a = new int[size];
    cout << "enter the elements of the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    array m(a, size);
   // array *s=new array(a,size);
    cout << "Enter the element to append" << endl;
    cin >> ele;
    m.append(ele);
    cout << "Enter the index and the element to insert" << endl;
    cin >> ind >> ele;
    m.insert(ind, ele);
    cout << "Enter the index to delete the element" << endl;
    cin >> ind;
    m.deletee(ind);

    return 0;
}