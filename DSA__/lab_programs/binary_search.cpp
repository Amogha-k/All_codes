// 
#include<iostream> 
using namespace std; 
class binary_search
{
   private :
   int *arr,size;
   public:
    int data;
    int res;
   binary_search()
   {
    input();
    res=search(0,size-1);
    if(res<0)
    {
        cout<<"data not found"<<endl;
    }
    else{
        cout<<"data found at "<<res<<endl;
    }
   }
   
   void input()
   {
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    arr=new int[size];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
     cout<<"Enter the data to be fetched"<<endl;
     cin>>data;

   }
   int search(int low,int high)
   {
    if(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==data)
        {
            return mid;
        }
       else if(arr[mid]<data)
         return search(mid+1,high);
        else if(arr[mid]>data)
        return search(low,mid-1);

    }
    return -1;

   }
   
};
int main() 
{ 
    binary_search b;
  
    return 0 ;
}