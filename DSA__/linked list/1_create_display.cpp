// creating the class for node and displaying the linked list
#include<iostream> 
using namespace std; 
class node
{
    public:
    int data;
    node *next;//self refernential structure
               // node is pointing to another node
};
class linked_list{
    private:
    
    public:
    void create(node *p)
    {
        
    }
    void display(node *p)
    {
        while(p!=NULL)
        {
            cout<<p->data<<" ";
            p=p->next;
        }
    }


};

int main() 
{ 
    
  
    return 0 ;
}