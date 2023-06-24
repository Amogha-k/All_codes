// to find the key using linear search
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
    // function to search the key and return the index if found
    int linear_search(int key)
    {
        for (int i = 0; i <size ; i++)
        {
            if (key==a[i])
            { // to get early acess to that element we keep it as first element
                swap(a[i], a[0]);
                
                return 0;
            }
            
        }
        return -1;
    }
};

int main()
{
    int n, ke;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int *a = new int[n];
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    array *p = new array(a, n);
    cout << "enter the key to find" << endl;
    cin >> ke;
   int index=( p->linear_search(ke));
    cout<<"Element found at "<<index;
    return 0;
}