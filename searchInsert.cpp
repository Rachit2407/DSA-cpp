#include<iostream>
using namespace std;

    int searchIns(int arr[],int size , int target){
        int s=0;
        int e=size-1;
        int mid=s+(e-s)/2;
        while(s<=e)
        {
            if(arr[mid]== target)
             {return mid;}
            else if(target<arr[mid])
             {e=mid;}
            else if (target>arr[mid])
             {s=mid+1;}
            if(target<arr[mid]&& target >arr[mid-1])
            {return mid;}
            if(s==e){
                return s;
            }
            if(target>arr[size-1])
            {return size;}
             mid=s+(e-s)/2;
        }
    
    }


int main(){

int even[7]={1,2,4,5,7,8,9};



int ans=searchIns(even,7,3);

cout<< "The position of element  3 is "<< ans<<endl;

}