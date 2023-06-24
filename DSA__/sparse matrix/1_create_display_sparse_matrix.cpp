// creating and display of sparse matrix
#include <iostream>
using namespace std;
class element
{//to keep check on the array
public:
    int i;
    int j;
    int x;
    //element *ele;
};
class sparse
{
    private :
    int rows;
    int columns;
    int non_zeros;
    element *e;//to create an array 
    public:
    sparse(int rows,int columns,int non_zeros )//first in the table to take the rows and columns and the elements
    {
        this->rows=rows;
        this->columns=columns;
        this->non_zeros=non_zeros;
        e=new element[this->non_zeros];
    }
    void create();
    friend ostream& operator<<(ostream &output,sparse &s) ;//exertion overloading
    ~sparse()
    {
        delete []e;//deleting the array
    }
};
ostream& operator<<(ostream &output,sparse &s)
{
    int k=0;
    for(int i=0;i<s.rows;i++)
    {
        for(int j=0;j<s.columns;j++)
        {
            if(s.e[k].i==i &&s.e[k].j==j)
            {
                output<<s.e[k++].x<<" ";
            }
            else
            {
                cout<<"0"<<" ";
            }
        }cout<<endl;
    }
    return output;
}
void sparse::create()
{
  cout<<"enter the non zero elements"<<endl;
  for(int i=0;i<non_zeros;i++)
  {
    cin>>e[i].i>>e[i].j>>e[i].x;
  }

}
int main()
{
    sparse s1(5,5,5);
    s1.create();
    cout<<s1;
    return 0;
}