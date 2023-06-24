// binary search to find the given key using recursion
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
    int binary_search(int low, int high, int key)
    {
        if(low<=high)
        {
            int mid = (low + high) / 2;
            if (key == a[mid])
            {
                return mid;
            }
            else if (key < a[mid])
            {
                binary_search(low,mid-1,key);
            }
            else
            {
                binary_search(mid+1,high,key);
            }
        }
        return -1;
    }
};
int main()
{
    int a[]={1,2,3,4,5};
    array *x=new array(a,5);
    cout<<x->binary_search(0,4,3);

    return 0;
}