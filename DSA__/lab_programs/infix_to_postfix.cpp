//program for conversion for infix to postfix
#include <iostream>
using namespace std;
class convert
{
private:
    char infix[30], postfix[30], stack[30];
    int top;

public:
    convert();
    ~convert();
    void getInput();
    void display();
    void infixTopostfix();
    int getPrecendecy(char ch);
    void push(char ch);
    char pop();
};
convert::convert()
{
    top = -1;
}
convert::~convert()
{
}
void convert::getInput()
{
    cout << "Enter the infix" << endl;
    cin >> infix;
}
void convert ::display()
{
    cout << "the converted postfix is " << postfix << endl;
}
int convert::getPrecendecy(char ch)
{
    int p;
    switch (ch)
    {
    case '^':
        p = 3;
        break;
    case '*':
    case '/':
        p = 2;
        break;
    case '+':
    case '-':
        p = 1;
        break;
    case '(':
        p = 0;
        break;
    case '#':
        p = -1;
        break;

    default:
        break;
    }
    return p;
}
void convert ::push(char ch)
{
    top++;
    stack[top] = ch;
}
char convert::pop()
{
    char item = stack[top];
    top--;
    return item;
}
void convert::infixTopostfix()
{
    int i;//this is for infix
    int  p;//this is for postfix
    char c;
    i = p = 0;
    push('#');//this is the first element and poped till here
    while (infix[i] != '\0')
    {
        c = infix[i];
        switch (c)
        {
        case '(':
            push(c);
            break;
        case ')':
            while (stack[top] != '(')
            {
                // revise
                postfix[p] = pop();
                p++;
            }
            pop();
            break;
        case '^':
        case '*':
        case '/':
        case '+':
        case '-':
            while (getPrecendecy(stack[top]) >= getPrecendecy(c))
            {
                postfix[p] = pop();
                p++;
            }
            push(c);
            break;

        default:
            postfix[p] = c;
            p++;
            break;
        }
        i++;
    }
    while (stack[top] != '#')
    {
        postfix[p] = pop();
        p++;
    }
    postfix[p] = '\0';
    return;
}

int main()
{
    convert con;
    con.getInput();
    con.infixTopostfix();
    con.display();
    return 0;
}