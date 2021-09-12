#include<iostream>
using namespace std;
void fib(int n){
    int t0=0;
    int t1=1;
    int nextTerm;
    for(int i=1;i<=n;i++){
        cout<<t0<<endl;
        nextTerm=t0+t1;
        t0=t1;
        t1=nextTerm;
    }
    return;


}
int main(){
    int n;
    cin>>n;
    fib(n);
}