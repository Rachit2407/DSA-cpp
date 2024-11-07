#include<bits/stdc++.h>
using namespace std;

//iterative method 


//here the concept is gcd(a,b)=gcd(a-b,b)=gcd(a%b,b)
// we need to do this until one number is 0 then the other number is the gcd 
int gcd(int a,int b){
    if(a==0)  return b;
    if(b==0) return a;
    //if both a and b are  equal then the values of a and b is nothing but the gcd 
    while(a!=b){
        if(a>b) {
            a=a-b;
        }
        else{
            b=b-a;
        }
          
    }

    return a;// or return b

}


int main(){
    int a,b,ans;
    cin>>a>>b;
    ans=gcd(a,b);
    cout<<"gcd is "<<ans;

}