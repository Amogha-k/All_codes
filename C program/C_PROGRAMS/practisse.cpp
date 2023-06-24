// section sort 
#include<iostream>
using namespace std ;
int main()
{
    int n , i , j ;
    cout<<"Enter number of elements of the array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the  array : ";
    for(i=0 ;i<n;i++)
    cin>>a[i];
    cout<<"The array before sorting : ";
    for(i=0 ;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    int sma ;
    for(i=0 ;i<n-1;i++)
    {
        sma = i ;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[sma])
            sma = j;
        }
        if (sma != i)
        {
            int tem ; 
            tem = a[sma];
            a[sma]=a[i];
            a[i]=tem;
        }
    }
    cout<<"The after sorting  :  ";
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;

    return 0 ;
}