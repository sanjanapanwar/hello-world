#include <iostream>

using namespace std;

int main()
{
  int i,j,n,m,k;
  cout<<"enter the value of rows:";
  cin>>n;
  cout<<"enter the value of columns:";
  cin>>m;
  for(j=0;j<m;j++)
  {
      for(i=1;i<=n-1-j;i++)
      {
          cout<<" ";

      }
      for(k=1;k<=(2*j)-1;k++)
      {
          cout<<" *";
      }
      cout<<"\n";
  }

}
