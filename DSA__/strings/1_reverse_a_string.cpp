// 
#include<iostream> 
using namespace std; 
class Array
{
    private:
    char *a;
    int size;
    int length;
    public:
    Array(int size)
    {
        char *a=new char[size];
        this->size=size;
        length=0;
    }
    void create()
    {
        int i=0;
        cout<<"enter the string "<<endl;
        gets(a);
        a[i]='\0';
        length=get_length();

    }
    int get_length()
    {
        int i=0;
        while(a[i]!='\0')
        {
            length++;
        }
        return length;
    }
    void reverse()
    {
        int i=0,j;
        char b[size];
        for( i=0,j=length-1;j>0;i++,j--)
        {
            b[i]=a[j];
        }
        b[i]='\0';
        cout<<b<<endl;

    }

};
int main() 
{ int sz;
    cout<<"Enter the size of a string"<<endl;
    cin>>sz;
    Array *str=new Array(sz);
    str->create();
    str->reverse();
    
  
    return 0 ;
}