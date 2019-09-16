#include <iostream>

using namespace std;

int area(int r)
{
    cout<<"area of circle :"<<3.14*r*r<<endl;
}
int area(int l,int b)
{
    cout<<"area of rectangle:"<<l*b<<endl;
}
int area(int c,int b,int h)
{
    cout<<"area of cube:"<<2*(c*b+b*h+h*c)<<endl;
}

int main()
{
    area(3);
    area(4,5);
    area(3,4,5);

}
