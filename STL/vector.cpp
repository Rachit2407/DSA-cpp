#include<bits/stdc++.h> // It includes a large number of libraries in our code in one go
#include<iostream>
using namespace std;

void explainVector(){

vector<int> v;

v.push_back(1);
v.emplace_back(2);

vector<pair<int,int>>vec;
vec.push_back({1,2});
vec.emplace_back(1,2);

for(vector<int>::iterator it =v.begin();it!=v.end();it++)
{
cout<<*(it)<<" ";
}




}



int main() {
    explainVector();
    
}
