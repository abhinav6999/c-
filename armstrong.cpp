#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
     int t = n;
   while(t>0){
       int lastdigit = t%10;
       sum=sum+round(pow(lastdigit,3));
       t = t/10;
   }
   cout<<sum;
   if(sum==n){
       cout<<"armstrong no."<<endl;
   }
   else{
       cout<<"non armstrong"<<endl;
   }
        return 0;
}