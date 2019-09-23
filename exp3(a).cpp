#include <iostream>
#include<math.h>

using namespace std;
struct date{
           int dd,mm,yy;
        }dob;
class employee{
              int rank1,i,sal,id,y,n;

          public:
            int employee_inf()
            {
                for(i=1;i<=2;i++)
                {
                   cout<<"employee"<<i<<endl;
                   cout<<"enter employee id";
                   cin>>id;
                   cout<<"enter your joining salary";
                   cin>>sal;
                   cout<<"enter the date";
                   cin>>dob.dd;
                   cout<<"enter the month";
                   cin>>dob.mm;
                   cout<<"enter the year";
                   cin>>dob.yy;
                   cout<<"date of birth of employee"<<dob.dd<<"-"<<dob.mm<<"-"<<dob.yy;
                   cout<<"enter the rank";
                   cin>>rank1;
                   cout<<"enter after how mant years you want to know the increment";
                   cin>>n;



                    dob.yy=dob.yy+n;
                    sal=(0.25*sal)*n+sal;
                    rank1=rank1+n;
                    cout<<" employee info in present year"<<dob.yy<<endl;
                    cout<<"employee salary"<<sal<<endl;
                    cout<<"employee rank"<<rank1<<endl;

                }




              }};
int main()
{
    employee obj1;
    obj1.employee_inf();
    return 0;
}



