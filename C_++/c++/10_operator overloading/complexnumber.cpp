#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int imag;

public:
    complex(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }
    complex operator+(complex c2)
    {
        complex c3(0, 0);
        c3.real = this->real + c2.real;
        cout<<c3.real<<endl;
        c3.imag = this->imag + c2.imag;
        return c3;
    }
    void display()
    {
        cout << real << "+i" << imag << endl;
             
    }
};
int main()
{
    complex c1(1, 3);
    complex c2(2, 5);
    complex c3 = c1 + c2;
    c3.display();
    
}