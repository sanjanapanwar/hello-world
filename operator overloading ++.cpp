#include<iostream>
using namespace std;
class weight
{
private:
    int kg;
public:
    weight()
    {
        kg=0;
    }
    weight(int x)
    {
        kg=x;
    }
    void print()
    {
        cout<<"the weight in kg:"<<kg<<endl;

    }
    void operator++()
    {
     ++kg;
    }

};
int main()
{
    weight obj;
    ++obj;
    obj.print();
    weight obj1(45);
    ++obj1;
    obj1.print();
    return 0;
}
