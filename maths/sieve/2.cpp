#include<bits/stdc++.h>
using namespace std;

int sieve(int n){
    int count=0;
    vector<int>primes(n+1,1);
    primes[0]=primes[1]=0;

    for(int i=2;i<n;i++){
        if(primes[i]==1){
            count++;
            for(int j=2*i;j<n;j=j+i){
                primes[j]=0;
            }
        }


    }
    cout<<"The prime numbers before "<< n<<" are: ";
    for(int k=2;k<n;k++){
        
        if(primes[k]==1){
            cout<<k<<" ";
        }


    }
    cout<<endl;


    return count;


}




int main(){
int n,ans;
cin>>n;
ans=sieve(n);
cout<<"Their count is: "<<ans;


}