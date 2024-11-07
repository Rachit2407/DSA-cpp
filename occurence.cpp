#include<iostream>
using namespace std;

int firstOccur(int arr[],int size , int key ){

    int start =0 ;
    int end = size-1;
    int mid=start +(end-start)/2;
    int ans= -1;

while(start<=end)
{
    if(key==arr[mid]){
    ans= mid;
    end = mid-1;
    }
    if(key>arr[mid]){
     start=mid+1;
    }
    else{
     end=mid-1;
    }
    mid=start +(end-start)/2;
}
}


int lastOccur(int arr[],int size , int key ){

    int start =0 ;
    int end = size-1;
    int mid=start +(end-start)/2;
    int ans= -1;

while(start<=end)
{
    if(key==arr[mid]){
    ans= mid;
    start=mid+1;
    }
    if(key>arr[mid]){
     start=mid+1;
    }
    else{
     end=mid-1;
    }
    mid=start +(end-start)/2;
}


}



int main(){

int even[6]={1,3,5,8,8,8};
int odd[5]={3,6,7,8,9};


cout<<"first occurence of 8 is "<< firstOccur(even,6,8)<< endl;
cout<<"last occurence of 8 is "<< lastOccur(even,6,8) << endl;
cout<<"No. of occurences of 8 is " << lastOccur(even,6,8) - firstOccur(even,6,8) + 1 ;

}