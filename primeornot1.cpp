#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i;
    bool flag=0;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<"Non prime"<<endl;
            flag=1;
            break;
        }
        }
         if(flag==0){
            cout<<"prime no."<<endl;
         }
        return 0;
}