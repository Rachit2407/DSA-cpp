//{ Driver Code Starts
//Initial Template for C++
//in this code we learnt use of length() function

#include <bits/stdc++.h>
using namespace std;

void checkString(string s);


// } Driver Code Ends
//User function Template for C++

void checkString(string s)
{
    int v=0;
    int c=0;
    //Your code here
    
    
    for(int i=0;i<=s.length();++i)// this is how we use length function
    {
        if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u'))
        {
            v+=1;
            
        }
        else{c+=1;}
    }
    
    if(v>c)
        cout<<"Yes";
    else if(c>v)
        cout<<"No";
    else
        cout<<"Same";
    
    cout<<endl;
}

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
	    
	    string s;
	    getline(cin,s);
	    
	    //function call
	    checkString(s);
	   
	}
	return 0;
}


// } Driver Code Ends