#include <iostream>
#include<math.h>

using namespace std;
class cal_distance{
public:
float distance(int x1,int x2,int y1,int y2)
{
    float d1;
    d1=pow((pow((x1-x2),2)+pow((y1-y2),2)),0.5);
    cout<<"the distance btw two points in 2d:"<<d1<<endl;
}
float distance(int x1,int x2,int y1,int y2,int z1,int z2)
{
    float d2;
    d2=pow(pow((x2-x1),2)+pow((y2-y1),2)+pow((z2-z1),2),0.5);
    cout<<"the distance btw two points in 3d :"<<d2<<endl;
}
};

int main()
{
   cal_distance obj1;
   obj1.distance(2,4,6,8);
   obj1.distance(2,4,6,8,5,1);

}
