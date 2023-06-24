// Array operations
#include <iostream>
using namespace std;

class array
{
private:
    int *a;
    int size;

public:
    array(int *b, int n)
    {
        a = b;
        size = n;
    }

    // insert the element at a given index
    void insert(int index, int element)
    {
        if (index >= 0 && index <= size)
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
            cout << "Index out of range" << endl;
        }
    }

    // appends an element to an array
    void append(int element)
    {
        a[size++] = element;
        display();
    }

    // delete an element from a given index
    void delete_ele(int index)
    {
        if (index >= 0 && index < size)
        {
            for (int i = index; i < size - 1; i++)
            {
                a[i] = a[i + 1];
            }
            size--;
            display();
        }
        else
        {
            cout << "Index out of range. " << endl;
        }
    }

    // Display the array
    void display()
    {
        cout << "Array : ";
        for (int i = 0; i < size; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements of the array : ";
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // array A(a, n);
    array *A = new array(a, n);
    // A.display();
    A->display();
    int ind, ele;
    cout << "Enter the in which you need to insert : ";
    cin >> ind;
    cout << "Enter the element need to inserted at " << ind << " : ";
    cin >> ele;
    // A.insert(ind, ele);
    A->insert(ind, ele);
    cout << "Enter the element to be append to array : ";
    cin >> ele;
    // A.append(ele);
    A->append(ele);
    cout << "Enter the index in which you need to delete an element : ";
    cin >> ind;
    // A.delete_ele(ind);
    A->delete_ele(ind);

    return 0;
}