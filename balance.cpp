#include <iostream>

using namespace std;

int main()
{
   int m,br,e,ban,milk,banana,egg,bread,sum,balance;
   cout<<"enter the amount of milk purchased by the user in litre:";
   cin>>m;
   cout<<"enter the no. of banana purchased by the user:";
   cin>>ban;
   cout<<"enter the no. of egg purchased by the use:";
   cin>>e;
   cout<<"bread pieces purchased by the user:";
   cin>>br;
   milk=50*m;
   banana=5*ban;
   egg=5*e;
   bread=30*br;
   sum=milk+banana+egg+bread;
   balance=500-sum;
   cout<<"balance:"<<balance;
   return 0;

}
