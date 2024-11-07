#include<iostream>
using namespace std;

int peak(int arr[] , int size){
  int s=0;
  int e=size-1;
  int mid=s+(e-s)/2;

  while(s<=e){
    if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
        return arr[mid];
    }

    else if(arr[mid]>arr[mid+1]){
        e=mid-1;
    }
    else if(arr[mid]>arr[mid-1]){
        s=mid+1;
    }

    mid=s+(e-s)/2;

}

return -1;

}



int main(){
  int even[6]={1,3,5,7,4,2};
  int odd[7]={2,4,5,7,8,6,5};
  int brr[5]={1,2,3,4,5};

cout<<"The peak element is "<< peak(brr,5)<<endl;




}