#include <iostream>

using namespace std;

int main()
{
    int i,n,table=0,j;
    cout<<"enter the value of n:";
    cin>>n;
    for(j=1;j<=20;j++)
    {
    for(i=1;i<=10;i++)
    {
        table+=n;
        cout<<" "<<table;

    }
    cout<<"\n";
    }

    return 0;

}
