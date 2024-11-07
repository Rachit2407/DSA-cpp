#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(a==0) return b;
    if(b==0) return a;

    if(a>b){
        return gcd(a%b,b);
    }
    else if(a<b){
        return gcd(a,b%a);
    }
    else{
        return a;
    }


}


int main(){
    int a,b,ans;
    cin>>a>>b;
    ans=gcd(a,b);
    cout<<"gcd is "<<ans;

}