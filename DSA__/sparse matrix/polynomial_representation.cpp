// 
#include<iostream> 
using namespace std; 

class term
{
    public:
    int coeffcenit;
    int exponential;
};
class polynomial
{
    public:
    int non_zero_elements;
    term *t;//to create an dynmaic array 
    polynomial create()
{
   // polynomial p;
    cout<<"enter the non zero elements:"<<endl;
    cin>>non_zero_elements;
    t=new term[non_zero_elements];

    //cout<<p->non_zero_elements<<endl;
    //cout<<"Enter the polynomial terms:"<<endl;
    for(int i=0;i<non_zero_elements;i++)
    {
       cin>>t[i].coeffcenit>>t[i].exponential;
    }
    //return p;
}
void display()
{
   // polynomial p;
    cout<<"The expression is"<<endl;
    //cout<<p->non_zero_elements<<endl;

    for(int i=0;i<non_zero_elements;i++)
    {
        cout<<t[i].coeffcenit<<"x"<<"power"<<t[i].exponential<<"+";
    }
}
};

void display(polynomial *p)
{
   // polynomial p;
    cout<<"The expression is"<<endl;
    //cout<<p->non_zero_elements<<endl;

    for(int i=0;i<p->non_zero_elements;i++)
    {
        cout<<p->t[i].coeffcenit<<"x"<<"power"<<p->t[i].exponential<<"+";
    }
}
polynomial* addition(polynomial p1,polynomial p2)
{
    int i,j,k;
    i=0,j=0,k=0;
    polynomial *sum=new polynomial();
    if (i<p1.non_zero_elements && j<p2.non_zero_elements)
    {
        sum->t=new term[p1.non_zero_elements+p2.non_zero_elements];

        if(p1.t[i].exponential<p2.t[j].exponential)
        {
            sum->t[k++]=p1.t[i++];
        }
        else if(p1.t[i].exponential>p2.t[j].exponential)
        {
         sum->t[k++]=p2.t[j++];
        }
        else
        {
            sum->t[k].exponential=p1.t[i].exponential;
            sum->t[k++].coeffcenit=p1.t[i].coeffcenit+p2.t[i].coeffcenit;
        }
    }
    return sum;
}
int main() 
{ 
    polynomial p1,p2,*p3;
    p1. create() ;
    p2.create() ;
    //display(p);
    p3=addition(p1,p2);
    display(p3);
    return 0 ;
}