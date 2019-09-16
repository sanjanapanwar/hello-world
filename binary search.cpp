#include <iostream>
#include<math.h>

using namespace std;
int binary_search()
{
    int h,l,mid,n;
     int a[10]={1,2,3,4,5,6,7,8,9,10};
cout<<"enter the value of element to be search:";
    cin>>n;
    l=0;
    h=9;
    while(l<h)
    {
    mid=(l+h)/2;


    if(n==a[mid])
    {
        return mid;
    }
    else if(n>a[mid])
    {
       l=mid+1;

    }
    else
    { h=mid-1;


    }
    }
    return -1;
}
int main()
{


    cout<<binary_search();


}
