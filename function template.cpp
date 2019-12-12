#include<iostream>
using namespace std;
template <typename t>
//function template
t add(t x,t y)
{
    return x+y;
}
int main()
{
    cout<<"addition of two integers:"<<add<int>(3,4)<<endl;
    cout<<"addition of two float:"<<add<float>(3.2f,4.3f)<<endl;
    cout<<"addition of two double:"<<add<double>(3.433,4.244)<<endl;
}
