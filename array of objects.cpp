#include <iostream>

using namespace std;

class obj_array
{
    int i;
    char name[5];
    int age;
public:
    void get_data()
    {


           cout<<"enter the name of employee:"<<endl;
           cin>>name;
           cout<<"enter the age of employee:"<<endl;
           cin>>age;

    }
   void display()
   {
       cout<<"name:"<<name<<" "<<"age:"<<age<<endl;
   }
};
int main()
{
    int i;
    obj_array obj[5];
    for(i=0;i<5;i++)
    {
        obj[i].get_data();
        obj[i].display();

    }

}
