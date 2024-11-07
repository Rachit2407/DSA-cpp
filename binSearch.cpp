#include<iostream>
using namespace std ;
//Binary search method works only when the data in array is monotonic 
// This one is for monotonic increasing function 
int binarySearch(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid = start +(end-start)/2 ;

    while(start<=end){
        if(arr[mid]==key){
        return mid ;
        }
        // go to right vala part
        if(key>arr[mid])
        {
            start = mid+1;
        }
        else{
            end=mid-1;
        }
        mid= start+ (end-start)/2;
    }
    return -1; 
}

int main()
{
    int even[6]={2,4,6,7,8,9};
    int odd[5]={1,4,6,8,9};

    int evenIndex=binarySearch(even,6,9);
    int oddIndex=binarySearch(odd,5,8);

    cout << " Index of 9 is " << evenIndex << endl;
    cout << " Index of 8 is " << oddIndex ;



}
