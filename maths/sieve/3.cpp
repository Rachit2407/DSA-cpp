#include<bits/stdc++.h> // It includes a large number of libraries in our code in one go

using namespace std;

int primes(int n){
    vector<int> prime(n+1,1);
    int count=0;
    for(int i=2;i<n;i++){
        if(prime[i]==1){
            count++;
            for(int j=2*i;j<n;j=j+i){
                prime[j]=0;
            }


        }


    }
    return count;



}

int main(){

    int n,ans;
    cin>>n;
    ans=primes(n);
    cout<<ans<<endl;



}