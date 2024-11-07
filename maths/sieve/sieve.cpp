//sieve of eratosthenes 
#include<bits/stdc++.h> // It includes a large number of libraries in our code in one go
#include<iostream>
using namespace std;

int countPrimes(int n){
    int count=0;
    vector<bool> primes(n,true);

    primes[0]=primes[1]=false;

    for(int i=2;i<n;i++){
        if(primes[i]==true){
            count++;

            for(int j=2*i;j<n;j=j+i){
                primes[j]=false;
            }


        }


    }
    return count;



}




int main(){

int n,ans;
cin>>n;
ans=countPrimes(n);
cout<<ans<<endl;


}