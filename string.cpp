#include<iostream>
#include<string>
using namespace std;

int main()
{
   string FullName;
   cout<<"Enter Your name \n";
   getline(cin,FullName);//it is used to read full name as if we use normal 'cin>>FullName' then it will only read till 1st space 
    cout<<"Your name is "<<FullName;


}