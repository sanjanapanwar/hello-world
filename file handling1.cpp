#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    char arr[100];
    cout<<"enter the name and age:"<<endl;
    cin.getline(arr,100);
    cout<<"file open successfully"<<endl;
    ofstream myfile("abc.txt");
    myfile<<arr;
    myfile.close();
}




