#include<stdio.h>
int main()
{
    int n ,i ,data ;
    printf("Enter the number elements in an array : "); //10
    scanf("%d",&n);
    printf("Enter an sorted array\n");
    int arr[n];
    printf("ENter an array : ");
    for(i=0;i<n;i++)
    scanf("%d",arr[i]);
    printf("Enter the data to be searched : ");
    scanf("%d",&data);

    int result = binary(arr,0,9,data);
    if(result>=0)
    printf("The element is present at %d index",result);
    else
    printf("data not found");

    return 0;
}

int binary(int arr[],int l , int r , int data)
{
    if(l<=r)
    {
        int mid = l + r / 2;
        if(data<arr[mid])
        return binary(arr,0,mid-1,data);
        if(data>arr[mid])
        return binary(arr,mid+1,9,data);
        else 
        return mid ;
    }
    return -1 ;
}