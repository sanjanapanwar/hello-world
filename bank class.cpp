#include <iostream>
#include<math.h>

using namespace std;
class bank{
          char name[20];
          int act_no;
          char act_type[20];
          int bal,n;
          int i=0,j,k,s;
          float m,l;

      public:




        void initial_val()
        {
            cout<<"enter the no. of depositor:";
            cin>>n;
       for(s=0;s<n;s++)

{


            cout<<"enter the name of the depositer";
            cin>>name;
            cout<<"enter the account number of depositer";
            cin>>act_no;
            cout<<"initial value of money here:"<<i<<endl;
            deposit_amt();
            withdraw_amt();
            balance();
}

        }
        float deposit_amt()
        {
            cout<<"amount deposit:";
            cin>>j;

        }
        float withdraw_amt()
        {
            cout<<"enter the withdrawn amount here:";
            cin>>m;
        }
        float balance()
        {
            l=j-m;
            cout<<"amount balance:"<<l<<endl;
        }

          };
    int main()
    {
        bank obj1;
        obj1.initial_val();

        return 0;
    }
