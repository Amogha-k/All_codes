//
#include <iostream>
using namespace std;
class Queue
{
private:
    int *a, front, rear, size;

public:
    Queue()
    {
    }
    Queue(int sz)
    {
        size = sz;
        front = rear = -1;
        a = new int[size];
        input();
    }
    void enqueue(int val)
    {
        if (rear == size - 1)
        {
            cout << "Queue if full" << endl;
            return;
        }
        else if (front == -1)
        {
            front = 0;
        }
        rear++;
        a[rear] = val;
        cout << "value entered succuesfully" << endl;
    }
    void dequeue()
    {
        if (front == -1 || (front > rear))
        {
            cout << "Queue is empty" << endl;
            return;
        }
        else
        {
            cout << "Dequed element is " << a[front] << endl;
            front++;
        }
    }
    void display()
    {
        int f = front;
        int r = rear;
        if (front == -1 || front > rear)
        {
            cout << " Queue is empty";
        }
        else
        {
            do
            {
                cout << a[f] << "\t";
                f++;
            } while (f <= rear);
        }
        cout << endl;
    }
    void input()
    {
        int value;
        int option;

        do
        {
            cout << "1.Enque" << endl;
            cout << "2.dequeue" << endl;
            cout << "3.display" << endl;
            cout << "4.exit" << endl;
            cout << "Enter the option" << endl;
            cin >> option;
            switch (option)
            {
            case 1:
                cout << "Enter the value =";
                cin >> value;
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);

            default:
                break;
            }
        } while (1);
    }
};
int main()
{
    int sz;
    cout << "Enter the size of the queue=";
    cin >> sz;
    Queue q(sz);

    return 0;
}