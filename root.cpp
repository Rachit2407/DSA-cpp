#include<iostream>
using namespace std;


long long int floorSqrt(long long int x) 
    {

        int s=1;
        int e=x;
        int mid=s+(e-s)/2;
        while(s!=e){
          if(mid*mid>x)
            e=mid-1;
          else if(mid*mid<x)
            s=mid+1;
          else if(mid*mid==x)
            return mid;
          mid=s+(e-s)/2;
        }
        // Your code goes here   
    }


int main()
{
	
		long long n;
		cin>>n;
		
		cout << floorSqrt(n) << endl;
	
    return 0;   
}