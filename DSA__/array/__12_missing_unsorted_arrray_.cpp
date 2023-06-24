//
#include <iostream>
using namespace std;
class Array
{
private:
    int *a;
    int length;
    int size;

public:
    Array(int sz)
    {
        this->size = sz;
        length = 0;
        a = new int[sz];
    }
     void create(int sz)
    {
        cout<<" Enter the elements of the array"<<endl;
        for (int i = 0; i < sz; i++)
        {
            cin >> a[i];
            length++;
        }
    }//fastest method using hashset or bit set
    void missing_using_hashset(Array *Arr)
    {   int n=size;
        int h[size]={0};
        for(int i=0;i<n;i++)
        {
            h[a[i]]++;
        }
        for(int i=1;i<size;i++)
        {
            if(h[i]==0)
            {
                cout<<"\nThe missing element "<< i<<endl;
            }
        }
    }
    void display()
    {
        for (int i=0;i<length;i++)
        {
            cout<<a[i]<<" ";
        }
    }
    void missing_element(Array *b)
    {
        int diffrence;
        diffrence = a[0] - 0;
        for (int i = 0; i < length; i++)
        {
            if (a[i] - 0 != diffrence)
            {
                while (diffrence < a[i] - i)
                {
                    cout << "\nThe missing element is " << i + diffrence << endl;
                    diffrence++;
                }
            }
        }
    }
};
int main()
{
    int size;
    cout << "Enter the size in the array" << endl;
    cin >> size;
    Array *arr1 = new Array(size);
    arr1->create(size);
    Array *arr2=new Array(size);

    arr1->display();
    
    //arr1->missing_element();
    arr1->missing_using_hashset(arr2);

    return 0;
}