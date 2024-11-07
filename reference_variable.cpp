#include<iostream>

using namespace std;

int main(){
    int x=5;

    //reference variable to x
    int &ref=x;
    // now the variable x can also be accessed using name 'ref'
    cout<<ref<<" ";
    ref=10;
    cout<<ref;

    // now reference to a pointer 
    int a=17;
    int *p=&a;
    int *&ref_ptr=p;

    cout<<"\n"<<a<<" "<<*p<<" "<<"Pointer reference variable"<<*ref_ptr;

}