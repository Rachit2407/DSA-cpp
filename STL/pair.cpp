#include<bits/stdc++.h> // It includes a large number of libraries in our code in one go
#include<iostream>
using namespace std;

void explainPair() {
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    cout << p2.first << " " << p2.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second << endl;
}

int main() {
    explainPair();
    
}
