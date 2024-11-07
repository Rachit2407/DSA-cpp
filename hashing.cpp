#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
int arr[n]; // entering the array
for(int i=0;i<n;i++){
    cin>>arr[i];

}

//precompute ... 
int hash[13]={0};
for(int i=0;i<n;i++){
    hash[arr[i]]+=1;//here the hash array will store frequency of each element in itself
}

int q;
cin>>q;
while(q--){
    int number;
    cin>>number;
    //fetching the frequency
    cout<<hash[number]<<endl;
}





}
