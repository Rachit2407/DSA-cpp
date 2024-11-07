#include<iostream>
using namespace std ;

int pivot(int arr[],int size ){
    int LeftSum=0;
    int total=0;



    for(int i=0;i<=size-1;i++ )
    {
        total=total+arr[i];
    }


for(int j=0;j<=size-1;j++){
    if(LeftSum==total-LeftSum-arr[j])
      {  return j;}
    LeftSum=LeftSum+arr[j];
}
return -1;

}


int main(){
    int odd[5]={1,2,5,2,1};
    int even[6]={2,3,1,4,0,6};
    int brr[3]={2,-1,1};
    

    int ans = pivot(brr,3);
    cout<<" The index of pivot element is " << ans ;
}

