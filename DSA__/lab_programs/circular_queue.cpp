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
        if ((rear + 1) % size == front)
        {
            cout << "Queue if full" << endl;
            return;
        }
        else
        {
            if (front == -1)
                front = 0;

            rear = (rear + 1) % size;
            a[rear] = val;
        }
        display();
        cout << "Value entered succuesfully" << endl;
    }
    void dequeue()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Queue is empty" << endl;
        }
        // if last element in  the queue
        else if (rear == front)
        {
            cout << "Dequed element is " << a[front] << endl;
            rear = front = -1;
        }
        else
        {
            cout << "Dequed element is " << a[front] << endl;
            front = (front + 1) % size;
        }
    }
    void display()
    {
        if (front == -1 || rear == -1)
        {
            cout << " Queue is empty" << endl;
            return;
        }
        else
        {
            int f = front, r = (rear + 1) % size;
            do
            {
                cout << a[f] << " ";
                f = (f + 1) % size;
            } while (f != r);
            cout << endl;
        }
    }
    void input()
    {
        int option, value;
        do
        {
            cout << "1.enqueue" << endl;
            cout << "2.dequeue" << endl;
            cout << "3.display" << endl;
            cout << "4.Exit" << endl;
            cin >> option;
            switch (option)
            {
            case 1:
                cout << "Enter the value";
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
        } while (option < 4);
    }
};
int main()
{
    int sz;
    cout << "Enter the size of the queue=";
    cin >> sz;
    int value;
    int option;
    Queue q(sz);

    return 0;
}