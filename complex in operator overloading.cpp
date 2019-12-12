#include<iostream>
using namespace std;
class complex
{
private:

    int real;
    int imag;
public:

    complex()
    {
        real=0;
        imag=0;
    }
    complex(int r,int i)
    {
        real=r;
        imag=i;
    }
    void print()
    {
        cout<<"the sum of imag nos:"<<real<<"+"<<imag<<"i"<<endl;
    }
    complex operator+(complex c)
    {
        complex temp;
        temp.real=real+temp.real;
        temp.imag=imag+temp.imag;
        return temp;
    }

};
int main()
{
    complex c1(4,2);
    complex c2(3,5);
    complex c3;
    c3=c1+c2;
    c3.print();
}
