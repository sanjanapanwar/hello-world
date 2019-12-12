#include<iostream>
using namespace std;
template <typename t>
//class template
class test
{
    t a;
public:
    void get_data(t x)
    {
        a=x;
    }
    void display_data()
    {
        cout<<"the value of a:"<<a<<endl;
    }

};
int main()
{
    test<int>obj1;
    obj1.get_data(4);
    obj1.display_data();
    test<float>obj2;
    obj2.get_data(3.4f);
    obj2.display_data();
    test<double>obj3;
    obj3.get_data(3.455);
    obj3.display_data();
}
