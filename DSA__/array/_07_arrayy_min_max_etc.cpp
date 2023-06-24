// code for to find min max average total in the given array
#include <iostream>
using namespace std;
class array
{
private:
    int *p;
    int length;

public:
    array(int *b, int length) // recive as pointer b if you reciving a pointer
    {
        p = b;
        this->length = length;
    }
    // function to return the value at the user given index
    int get(int index)
    {
        if (index >= 0 && index < length)
        {
            return p[index];
        }
        return 1;
    }
    // function to set the value at user given index
    void set(int x, int index)
    {

        p[index] = x;
        cout << p[index] << endl;
        display();
    }
    // average of the elements in the array
    int avg()
    {
        int total = 0;
        for (int i = 0; i < length; i++)
        {
            total = total + p[i];
        }
        return total / length;
    }
    // maximum element of the array
    int maxx()
    {
        int max = p[0];
        for (int i = 1; i < length; i++)
        {
            if (p[i] > max)
            {
                max = p[i];
            }
        }
        return max;
    }
    // minimum element of the array
    int min()
    {
        int min = p[0];
        for (int i = 1; i < length; i++)
        {
            if (p[i] < min)
            {
                min = p[i];
            }
        }
        return min;
    }
    // retuning the sum of all the elements in the array
    int sum_of_all()
    {
        int total = 0;
        for (int i = 0; i < length; i++)
        {
            total = total + p[i];
        }
        return total;
    }
    // returning the sum using recursion
    int sum_usin_g_recursion(int n)
    {
        if (n < 0)
            return 0;
        return (sum_usin_g_recursion(n - 1) + p[n]);
    }
    /// displaying the all the elements in the array
    void display()
    {
        for (int i = 0; i < length; i++)
        {
            cout << p[i] << " ";
        }
        cout << endl;
    }
    void reverse()
    {
        cout << length << endl;
        int r[length];
        for (int i = length - 1, j = 0; i > 0; i--, j++)
        {
            r[j] = p[i];
        }
        // copying the reversed array to  the original array
        for (int i = 0; i < length; i++)
        {
            p[i] = r[i];
        }
        display();
    }
    void reverse_using_swap()
    {
        for (int i = 0, j = length - 1; i < j; i++, j--)
        {
            int temp = p[i];
            p[i] = p[j];
            p[j] = temp;
        }
        display();
    }
    void left_shift()
    {
        for (int i = 0; i < length; i++)
        {
            p[i] = p[i + 1];
        }
        p[length - 1] = 0;
        display();
    }
    void rotate()
    {
        int first_number = p[0];
        for (int i = 0; i < length; i++)
        {
            p[i] = p[i + 1];
        }
        p[length - 1] = first_number;
        display();
    }
    int chk_sorted_()
    {
        for (int i = 0; i < length - 1; i++)
        {
            if (p[i] > p[i + 1])
            {
                return false;
            }

            return true;
        }
    }
    void insert_in_sorted_array(int x)
    {
        if (length < sizeof(p[0]))
        {
            int i = length - 1;
            while (p[i] > x)
            {
                p[i + 1] = p[i];
                i--;
            }
            p[i + 1] = x;
            display();
        }
        else
        {
            cout << "The array is full" << endl;
        }
    }
    void negative_to_right_side()
    {
        int i = 0;
        int j = length - 1;
        while (i < j)
        {
            while (p[i] < 0)
            {
                i++;
            };
            while (p[i] > 0)
            {
                j--;
            };
            if (i < j)
            {
                swap(p[i], p[j]);
            }
        }
        display();
    }
    
};
int main()
{
    int size, index, value;
    string answer;

    cout << "enter the size of the array" << endl;
    cin >> size;

    int *a = new int[size];

    cout << "Enter the elements in the array" << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    // int len = sizeof(a) / sizeof(a[0]);

    array *arr = new array(a, size);
    cout << "which index value you need from the array?";
    cin >> index;
    cout << arr->get(index) << endl;
    cout << "want to set element" << endl;
    cin >> answer;
    if (answer == "yes" or answer == "Yes" or answer == "YES")
    {
        cout << "Enter the value and the index" << endl;
        cin >> value >> index;
        arr->set(value, index);
    }
    cout << "the maximum number of the given array is " << arr->maxx() << endl;
    cout << "the minimum number of the given array is " << arr->min() << endl;
    cout << "The sum of the elements of the array is " << arr->sum_of_all() << endl;
    cout << "The sum of the elements of the array is using recursion " << arr->sum_usin_g_recursion(size - 1) << endl;
    cout << "The average of the array is " << arr->avg() << endl;
    cout << "want to reverse an array? " << endl;
    cin >> answer;
    if (answer == "yes" or answer == "Yes" or answer == "YES")
    {
        cout << "reversed array is " << endl;
        arr->reverse();
    }
    cout << "want to rereverse an array using swap function?" << endl;
    cin >> answer;
    if (answer == "yes" or answer == "Yes" or answer == "YES")
    {
        cout << "reversed array is " << endl;
        arr->reverse_using_swap();
    }
    cout << "Do you like to left shfit the array?";
    cin >> answer;
    if (answer == "yes" or answer == "Yes" or answer == "YES")
    {
        arr->left_shift();
    }
    cout << "want to rotate an array ? " << endl;
    cin >> answer;
    if (answer == "yes" or answer == "Yes" or answer == "YES")
    {
        arr->rotate();
    }
    cout << "Checking the array is sorted?" << endl;
    cin >> answer;
    if (answer == "yes" or answer == "Yes" or answer == "YES")
    {
        int result = arr->chk_sorted_();
        if (result == 1)
        {
            cout << "it is an sorted array" << endl;
        }
        else
        {
            cout << "it is a unsorted array" << endl;
        }
    }
    cout << "insert an element to an sorted array?" << endl;
    cin >> answer;
    if (answer == "yes" or answer == "Yes" or answer == "YES")
    {
        cout << "Enter the value to be inserted ?" << endl;
        cin >> value;

        arr->insert_in_sorted_array(value);
    }
    cout << "sort the array based on the sign:" << endl;
    arr->negative_to_right_side();

    return 0;
}