// operations like  union intersection diffrence membership
#include <iostream>
using namespace std;
// //class array
// {
// private:
//     int *p;
//     int size;

// public:
//     array(int *q, int size)
//     {
//         p = q;
//         this->size = size;
//     }
//     array unionn(array ar1 , array ar2 )
//     {   
//         int m=ar1.size;
//         int n=ar2.size;
//         int i=0,j=0,k=0;
//         array *temp;
//         int *a = new int[ar1.size+ar2.size];
//         int n = 0 ;
//         while (i < m && j < n)
//         {
//             if (ar1.p[i] < ar2.p[j])
//             {
//                temp[k++] = ar1.p[i++];
//             }
//             else if (ar1.p[i] >ar2.p[j])
//             {
//                 temp[k++].p =ar2.p[j++];
//             }
//             else
//             {
//                 temp[k++] = ar1.p[i++];
//                 j++;
//             }
//         }
//         for (; i < m;)
//         {
//             temp[k++] = ar1.p[i++];
//         }
//         for (; j < n;)
//         {
//             temp[k++] = ar2.p[j++];
//         }
//         display();

//     }
// };
// int main()
// {
//     int i = 1, j, size;
//     cout << "how many arrays you want?" << endl;
//     cin >> j;
//     array r[] = new array[j] ;
//     while (i <= j)
//     {
//         cout << "enter the size of the array" << i << endl;
//         cin >> size;

//         int *a = new int[size];

//         cout << "Enter the elements in the array" << i << endl;

//         for (int i = 0; i < size; i++)
//         {
//             cin >> a[i];
//         }
//         ar=new array(a,size);
        
//         i++;
//     }

//     return 0;
// }