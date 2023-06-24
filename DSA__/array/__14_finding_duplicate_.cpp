// finding the duplicates in the sorted  array
#include <iostream>
using namespace std;
class array
{
private:
    int *a;
    int size;
    int length;

public:
    array(int size)
    {
        a = new int[size];
        this->size = size;
        length = 0;
    }
    void create()
    {
        cout << " Enter the elements of the array" << endl;
        for (int i = 0; i < size; i++)
        {
            cin >> a[i];
            length++;
        }
    }
    void find_duplicate_and_count()
    {
        int n = length;
        int j = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
            {
                j = i + 1;
                while (a[i] == a[j])
                    j++;
                cout << a[i] << " apperaing " << j - i << " times" << endl;
                i = j - 1;
            }
        }
    }
    int maximun()
    {
        int max = a[0];
        for (int i = 0; i < length; i++)
        {
            if (a[i] > max)
            {
                max = a[i];
            }
        }
        return max;
    }
    void find_dupicates_using_hashset()
    {
        int h[maximun()] = {0};
        for (int i = 0; i < length; i++)
        {
            h[a[i]]++;
        }
        for (int i = 0; i < maximun(); i++)
        {
            if (h[i] > 1)
            {
                cout << i << " apperaing " << h[i] << " times" << endl;
            }
        }
    }
    int finding_pair(int k)
    {
        for (int i = 0; i < length - 1; i++)
        {
            for (int j = 0; j < length; j++)
            {
                if (a[i] + a[j] == k)
                {
                    cout << a[i] << "+" << a[j] << "=" << k << endl;
                }
            }
        }
    }
    void using_bitset_pairing(int k)
    {
        int h[maximun()] = {0};
        for (int i = 0; i < length; i++)
        {
            if (h[k - a[i]] != 0)
            {
                cout << a[i] << "+" << k - a[i] << "=" << k << endl;
            }
            h[a[i]]++;
        }
    }
    void pairing_in_sorted(int k)
    {
        int i = 0;
        int j = length - 1;
        while (i < k)
        {
            if (a[i] + a[j] == k)
            {
                cout << a[i] << "+" << a[j] << "=" << k << endl;
                i++;
                j--;
            }
            else if(a[i]+a[j]<k)
               i++;
            else 
               j--;
        }
    }
};

int main()
{
    int size;
    cout << " enter the size of the array " << endl;
    cin >> size;
    array *a = new array(size);

    a->create();
    // a->find_duplicate_and_count();
    // a->find_dupicates_using_hashset();
    // a->finding_pair(10);
   // a->using_bitset_pairing(5);
    a->pairing_in_sorted(5);
    return 0;
}
