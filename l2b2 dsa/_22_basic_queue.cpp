#include <iostream>
using namespace std;
#define size 3
class queue
{
    int arr[size];
    int front;
    int rear;

public:
    queue()
    {
        front = 0;
        rear = 0;
    }
    void enqueue(int val)
    {
        if (size == rear)
            cout << "q is full" << endl;
        else
        {
            arr[rear] = val;
            rear++;
        }
    }
    void dequeue(){
        if(front==rear){
            cout<<"que is empty"<<endl;
        }
        else{
            cout<<"the poped element is "<<arr[front]<<endl;
            front++;
        }
    }
};
int main()
{
    queue q;

    cout<<"Enqueuing element: "<<10<<endl;
    q.enqueue(10);
    cout<<"Enqueuing element: "<<20<<endl;
    q.enqueue(20);
    cout<<"Enqueuing element: "<<30<<endl;
    q.enqueue(30);

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    return 0;
}

