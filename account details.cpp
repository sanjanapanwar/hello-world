#include <iostream>

using namespace std;

struct bank{
    char name[20];
    int num;
    char type[20];
    int balance;

}s;
int main()
{
    int i,n,d,w,b;
    cout<<"enter the no. of customer:";
    cin>>n;
    for(i=1;i<n;i++)
    {
        cout<<"customer"<<i<<endl;
        cout<<"account holder name";
        cin>>s.name;
        cout<<"account number:";
        cin>>s.num;
        cout<<"type of account:";
        cin>>s.type;
        cout<<"account balance:";
        cin>>s.balance;
        cout<<"enter the amount deposit:";
        cin>>d;
        cout<<"enter the amount withdrawn:";
        cin>>w;
        b=s.balance+d-w;
        cout<<"current balance:"<<b<<endl;
    }
}
