#include<iostream>
using namespace std;
int myNumbers[5] = {10, 20, 30, 40, 50};
// if u get error " error: expected unqualified-id before 'for' " then it means your loop is outside any function body
int main(){
for (int i : myNumbers) {
  cout << i << "\n";
}
}