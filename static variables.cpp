#include <iostream>

using namespace std;

class test
{
public:
    static int x;
    int display(int x)
    {
        cout<<"the value of static x:"<<test::x<<endl;
        cout<<"the value of local x:"<<x<<endl;
    }
};
int test::x=2;
int main()
{
    test obj1;
    obj1.display(4);
}
