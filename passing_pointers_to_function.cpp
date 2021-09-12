#include<iostream>
using namespace std;
//call by value
/*void increment(int a){ // a is a different variable
    a++;
}
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int a=2; // it is a different
    increment(a);
    cout<<a<<endl;
    int a =2;
    int b=4;
    swap(a,b);
    cout<<a<<" "<<b<<endl;

    return 0;
}*/
// pass by reference and address
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=2;
    int b=4;
    int *aptr=&a;
    int *bptr=&b;
    swap(aptr,bptr);
    cout<<a<<" "<<b<<endl;
    return 0;
}