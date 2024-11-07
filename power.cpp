#include<iostream>
using namespace std;

int power(int a, int b)
{
int c=1 ;
for(int i=1; i<=b;i++)
{
    c=c*a;    
}
return c;
}
int main()
{
    int a, b ;
 cout << "Enter the base number" << endl ;
 cin >> a ;

  cout << "Enter the power " << endl ;
 cin >> b ;

    int result =power(a,b);

    cout << "The answer is " << result << endl;

}


