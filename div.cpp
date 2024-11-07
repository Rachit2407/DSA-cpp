#include<iostream>
using namespace std;

int main()
 {
    int n=1,count=0;
while(n<=100){
 int z=6*n+3;

 if(z%7==0)
 {
    cout << " m is "<< z/7 << " n is "<< n << endl;
    int m=z/7;
    int a=m*700/2.5;
    cout<<"slit width is "<< a<<endl;
    count =count+1;
 }
n=n+1;

}
   cout<<count;
}