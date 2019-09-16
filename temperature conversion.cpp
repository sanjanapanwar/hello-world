#include <iostream>

using namespace std;

int main()
{
   int choice;
   float f,c;

   cout<<"enter the choice(1 or 2):if 1 then convert c to f otherwise f to c:";
   cin>>choice;
   if(choice==1)
   {
   cout<<"enter the value of temperature in celsius";
   cin>>c;
   f=(9.0/5.0)*c+32;
   cout<<f;
   }
   else
   {
       cout<<"enter the value of temperature in farenheit:";
       cin>>f;
       c=5*(f-32)/9;
       cout<<c;
   }

}
