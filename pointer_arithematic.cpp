// ++,--,+,- basic arithematic operation in pointer
#include<iostream>
using namespace std;
int main(){
    //int datatype
    /*int a=10;
    int *aptr=&a;
    cout<<aptr<<endl;
    aptr++; //(increment by  4 because it is int type) that's why we declare pointer as same datatype of variable.
    cout<<aptr<<endl;*/
    char ch='a';
    char *cptr=&ch;
    cout<<cptr<<endl;
    cptr++;
    cout<<cptr<<endl;
    return 0;
}