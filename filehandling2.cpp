#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    int i;
    cout<<"enter the value of i:"<<endl;
    cin>>i;
    ofstream myfile("xyz.txt",ios::app);
    myfile<<i<<endl;
    cout<<"file write operation is done successfully"<<endl;
    myfile.close();

}
