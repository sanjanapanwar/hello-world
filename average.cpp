#include <iostream>

using namespace std;

int main()
{
    int avg,i,n,sum=0;
    cout<<"enter the value of n\n";
    cin>>n;
    for(i=1;i<n;i++)
    {
        sum+=i;
        avg=(sum)/n;

    }
    cout<<"sum"<<sum<<endl;
    cout<<"avg"<<avg;
}
