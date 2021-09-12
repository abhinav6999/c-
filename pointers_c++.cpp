// Pointers are variables that store the address of other variables.(access and modified the variable)
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *aptr;
    aptr=&a;
    cout<<&a<<endl;
    cout<<aptr<<endl;
    cout<<*aptr<<endl; //dereferencing of pointer
    *aptr=20;
    cout<<*aptr<<endl;

    return 0;
}