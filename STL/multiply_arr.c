#include <stdio.h>
#include<conio.h>

int main(void) {
	// your code goes here
	int m,n,p;
	int arr1[m][n];
	scanf("%d %d",&m,&n);
	for(int i=0;i<m;i++){
	    for(int j=0;j<n;j++){
	        scanf("%d",&arr1[i][j]);
	        
	    }
	}
	scanf("%d %d",&n,&p);
	int arr2[n][p];
	for(int i=0;i<n;i++){
	    for(int j=0;j<p;j++){
	        scanf("%d",&arr2[i][j]);
	        
	    }
	}
	
	
	
	int arr3[m][p];
	
	for(int i=0;i<m;i++){
	    for(int j=0;j<p;j++){
	        arr3[i][j]=0;
	    }
	    
	}
	
	for(int i=0;i<m;i++){
	    for(int j=0;j<p;j++){
	        for(int count=0;count<n;count++){
	            arr3[i][j]=arr3[i][j]+(arr1[i][count])*(arr2[count][j]);
	            
	            
	        }
	        
	    }
	}
	
	for(int i=0;i<m;i++){
	    for(int j=0;j<p;j++){
	        printf("%d ",arr3[i][j]);
	        
	    }
	    printf("\n");
	}
}

