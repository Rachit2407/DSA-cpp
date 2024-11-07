#include<iostream>
using namespace std;

int firstocc(int arr[], int size  ,int key ){
 int s=0;
 int e=size-1;
 int mid=s+(e-s)/2;
 int ans=-1;

while(s<=e)
{
  if(arr[mid]==key){
    ans= mid;
    e=mid-1;}
  else if(key>arr[mid]){
     s=mid+1;
    }
  else {
     e=mid-1;
    }

mid=s+(e-s)/2;
}

}

int main(){

int even[6]={1,3,5,8,8,8};



int ans=firstocc(even,6,8);

cout<< "The index of element  8 is "<< ans<<endl;

}



