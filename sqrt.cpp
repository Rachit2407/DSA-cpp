#include<iostream>
using namespace std;

int sqrt(int a){
int s=0,e=a;
int  mid=s+(e-s)/2;
while(s<=e){
   
   if(mid*mid>a){
    e=mid-1;}
   else if(mid*mid<a){
    s=mid+1;
    }   
   else if(mid*mid==a){
    return mid;
}
     mid=s+(e-s)/2;
   

}

}



int main(){

    int b;
    cout<<"Enter a number"<<endl;
    cin>>b;
    

    int ans=sqrt(b);

cout<< "The square root of " << b << " is " << ans << endl;


}