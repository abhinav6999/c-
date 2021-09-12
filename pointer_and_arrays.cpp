//arrays similar to a pointers when we declare a array a variable is created which is point the 0 index elenent of an array.it is constant does not modified.
#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30};
    cout<<*arr<<endl;
    int *ptr=arr; // arr already store the address of 0th element.
    for(int i=0;i<3;i++){
        cout<<*ptr<<endl;
        ptr++;//it goes to memory location
    }
    for(int i=0;i<3;i++){
        cout<<*(arr+i)<<endl;// arr is a indexing pointer it goes to next index
        // arr++; //illegal
    }
    return 0;
}