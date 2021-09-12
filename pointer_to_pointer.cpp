#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *p=&a;
    cout<<*p<<endl;
    int **q=&p;
    cout<<*q<<endl; //ones time dereference
    cout<<**q<<endl; //twos time dereference
}