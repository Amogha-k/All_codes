//
#include <iostream>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

using namespace std;
class evaluation
{
private:
    int arr[50] = {0};
    string str;
    int top = -1;
    int result;

public:
    evaluation()
    {
        input();
        result = evaluate();
        display();
    }
    void display()
    {
        cout << result<< endl;
    }
    void input()
    {
        cout << "Enter the postfix " << endl;
        cin >> str;
    }
    void push(int item)
    {
        top++;
        arr[top] = item;
    }
    int pop()
    {
        int res = arr[top];
        top--;
        return res;
    }
    int calculate(int a, int b, char opt)
    {
        switch (opt)
        {
        case '+':
            return (a + b);
            break;
        case '*':
            return (a * b);
            break;
        case '-':
            return (a-b);
            break;
        case '/':
            return (a/b);
            break;
        case '$':
            return pow(a,b);
            break;
        default:
            return 0;
            break;
        }
    }
    int evaluate()
    {
        int i = 0;
        while (str[i] != '\0')
        {
            if (isdigit(str[i]))
            {
                push(str[i] - '0');
            }
            else
            {
                int a = pop();
                int b = pop();
                int res = calculate(b, a, str[i]);
                push(res);
            }
            i++;
        }
        return pop();
    }
};

int main()
{
    evaluation e;
}