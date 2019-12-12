#include <iostream>

using namespace std;

class details
{
    int a[5];
    int i;
public:
    void get_data()
    {
        for(i=0;i<=5;i++)
        {
            cout<<"enter the digit:"<<endl;
            cin>>a[i];
        }
    }
    void display()
    {
        for(i=0;i<=5;i++)
        {
            cout<<a[i]<<endl;
        }
    }
};
int main()
{
    details obj1;
    obj1.get_data();
    obj1.display();
}
