#include <iostream>
#include<math.h>

using namespace std;
class cal_area{
public:
    float area(int r)
    {
        float a1;
        a1=3.14*r*r;
        cout<<"area of circle is:"<<a1<<endl;
    }
    float area(int l,int b)
    {
        float a2;
        a2=l*b;
        cout<<"area of rectangle is:"<<a2<<endl;
    }
    float area(int l,int b,int h)
    {
        float a3;
        a3=2*(l*b+b*h+h*l);
        cout<<"area of cuboid is:"<<a3<<endl;
    }
};
int main()
{
    cal_area obj1;
    obj1.area(3);
    obj1.area(4,5);
    obj1.area(4,5,6);
}
